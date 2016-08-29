/*
Classes and methods for low level hardware control, e.g. GPIOs
*/
#include <stdio.h>
#include <wiringPi.h>

// enumerate the mode of the pin - read or write
enum dir_t { IN, OUT };
// enumerate the pull mode - up, down, or none
enum pull_t { NONE, UP, DOWN };
// enumerate logical high and logical low
enum level_t { LOW, HIGH };

class GPIO {
    public:
        GPIO(short, dir_t, pull_t);
        ~GPIO();
        dir_t getDir();
        void setDir(dir_t);
        pull_t getPull();
        void setPull(pull_t);
        void dump();
    protected:
    private:
        short       gpio;
        dir_t       direction;
        pull_t      pull;
        level_t     level;
};

GPIO::GPIO (short pin, dir_t mode = IN, pull_t mpull = NONE){
    gpio = pin;
    direction = mode;
    pull = mpull;
#ifndef SIMULATION
    pinMode(pin,mode);
    pullUpDnControl(pin,mpull)
#endif
}

GPIO::~GPIO(){
    direction = IN;
    pull = NONE;
}

// TODO: redisign turnOn() and turnOff()
// We need to check gpio direction before writing into it
// If direction == IN, throw exception
void turnOn(){
    level = HIGH;
#ifndef SIMULATION
    digitalWrite(gpio,HIGH);
#endif
}

void turnOff(){
    level = LOW;
#ifndef SIMULATION
    digitalWrite(gpio,LOW);
#endif
}

dir_t GPIO::getDir(){
    return direction;
}

void GPIO::setDir(dir_t dir){
    direction = dir;
}

pull_t GPIO::getPull(){
    return pull;
}

void GPIO::setPull(pull_t mpull){
    pull = mpull;
}

void GPIO::dump(){
    printf("GPIO      = %d\n",(int)gpio);
    printf("Direction = %d\n",(int)direction);
    printf("Pull      = %d\n",(int)pull);
}

int main(){
    GPIO g1(7,IN,DOWN);
    g1.dump();
}

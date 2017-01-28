#include <iostream>
#include <vector>
#include <string>
#include "component.h"
#include "channel.h"
#include "shell.h"

// using namespace std;

class Hub {
    std::vector<Component *> components;
public:
    void dump(){ std::cout << "Hub is here" << std::endl; }
    void operator+=(Component *);
    void start();
    void run();
    void proc_message(Message *);
};

void Hub::proc_message(Message *m){
    m->dump();
    // delete(*m);
}

void Hub::operator+=(Component *c){
    int index = components.size();
    c->setIndex(index);
	components.push_back(c);
}

void Hub::start(){
	// std::vector<Component>::iterator v = components.begin();
	for(int i = 0; i < components.size(); i++){
        std::cout << "Starting ";
		components[i]->dump();
        components[i]->run();
	}
}

void Hub::run(){
    Message *m = NULL;
    while(true)    
        for(int i=0; i<components.size(); i++){
            m = components[i]->receive();
            if(m == NULL){
                continue;
            } else {
                proc_message(m);
            }
        }
}

int main(){
    // std::cout << __cplusplus << std::endl;
    Hub mainhub;
    // Cronos c1("cronos0");
    IOmngr i1("PRmanager0");

    // mainhub += &c1;
    mainhub += &i1;

    mainhub.start();
    mainhub.run();
}

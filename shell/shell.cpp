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
    void run();
};

void Hub::operator+=(Component *c){
	components.push_back(c);
}

void Hub::run(){
	// std::vector<Component>::iterator v = components.begin();
	Component *v;
	while(true){
		for(int i = 0; i < components.size(); i++){
			components[i]->dump();
		}
	}
}

int main(){
    std::cout << __cplusplus << std::endl;
    Hub mainhub;
    Cronos c1("cronos0");
    Cronos c2("cronos1");

    mainhub += &c1;
    mainhub += &c2;

    mainhub.run();
}

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
	for(int i = 0; i < components.size(); i++){
        std::cout << "Starting ";
		components[i]->dump();
        components[i]->run();
	}
}

int main(){
    // std::cout << __cplusplus << std::endl;
    Hub mainhub;
    // Cronos c1("cronos0");
    IOmngr i1("PRmanager0");

    // mainhub += &c1;
    mainhub += &i1;

    mainhub.run();

    while(true)
        ;
}

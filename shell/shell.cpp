#include <iostream>
#include <vector>
#include <string>
#include "component.h"
#include "channel.h"
#include "shell.h"

// using namespace std;

class Hub {
    // std::vector <Channel *> channels;
    // std::vector <Worker *> workers;
    std::vector<Component *> components;
public:
    void dump(){ std::cout << "Hub is here" << std::endl; }
    void operator+=(Component *);
};

void Hub::operator+=(Component *c){
	components.push_back(c);
}

int main(){
    std::cout << __cplusplus << std::endl;
    Hub mainhub;
    Cronos cronos;

    mainhub += cronos;
}

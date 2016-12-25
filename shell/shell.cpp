#include <iostream>
#include <vector>
#include <string>
#include "worker.h"
#include "channel.h"
#include "shell.h"

// using namespace std;

class Hub {
    std::vector <Channel *> channels;
    std::vector <Worker *> workers;
public:
    void dump(){ std::cout << "Hub is here" << std::endl; }
};

int main(){
    std::cout << __cplusplus << std::endl;
}

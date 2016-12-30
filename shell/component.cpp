#include <iostream>
#include <queue>
#include "message.h"
#include "component.h"

// void Component::dump(){
//     std::cout << id << std::endl;
// }

void Cronos::send(){
    std::cout << status << std::endl;
}

void Cronos::receive(){
    std::cout << status << std::endl;
}

void Cronos::run(){
    std::cout << status << std::endl;
}

void Cronos::dump(){
	std::cout << protection_status << std::endl;
}

#include <iostream>
#include <queue>
#include "message.h"
#include "component.h"

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
	std::cout << id << std::endl;
}

void IOmngr::send(){
    std::cout << id << std::endl;
}

void IOmngr::receive(){
    std::cout << id << std::endl;
}

void IOmngr::run(){
    std::cout << id << std::endl;
}

void IOmngr::dump(){
	std::cout << id << std::endl;
}

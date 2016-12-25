#include <iostream>
#include <queue>
#include "message.h"
#include "worker.h"

void Worker::dump(){
    std::cout << id << std::endl;
}

void Cronos::send(){
    std::cout << status << std::endl;
}

void Cronos::receive(){
    std::cout << status << std::endl;
}

void Cronos::run(){
    std::cout << status << std::endl;
}

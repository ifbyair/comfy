#include <iostream>
#include <queue>
#include "message.h"
#include "component.h"

void Cronos::send(){
    std::cout << status << std::endl;
};

void Cronos::receive(){
    std::cout << status << std::endl;
};

void Cronos::run(){
    std::cout << status << std::endl;
};

void Cronos::dump(){
	std::cout << id << std::endl;
};

void Cronos::mainloop(){
	;
};

void IOmngr::send(){
    std::cout << id << std::endl;
};

void IOmngr::receive(){
    std::cout << id << std::endl;
};

void IOmngr::mainloop(){
	std::string result;

	while(true){
		result = getInput();
		std::cout << result << std::endl;
	}
};
void IOmngr::run(){
    // TODO: insert thread starting stuff here
    // with mainloop as a running function
    mainloop();
};

void IOmngr::dump(){
	std::cout << id << std::endl;
};

std::string IOmngr::getInput(){
	std::string result;

	std::cout << current_prompt;
	std::cin >> result;
	return result;
};

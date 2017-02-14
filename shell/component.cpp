#include <iostream>
#include <queue>
#include "message.h"
#include "component.h"
#include <pthread.h>

void gtfo(std::string);

void Cronos::send(){
    std::cout << status << std::endl;
};

Message *Cronos::receive(){
    std::cout << status << std::endl;
    return NULL;
};

void Cronos::run(){
    std::cout << status << std::endl;
};

void Cronos::dump(){
	std::cout << index << ": " << id << std::endl;
};

void *Cronos::mainloop(void *arg){
	return (void *)NULL;
};

void IOmngr::send(Message *m){
    send_up(m);
};

Message *IOmngr::receive(){
    // std::cout << id << std::endl;
    return check_in();
};

void *IOmngr::mainloop(void *arg){
	std::string result;
	Message *msg;

	while(true){
		result = IOmngr::getInput();
		// std::cout << result << std::endl;
		msg = new Message(result);
		IOmngr::instance->send(msg);
	}
};

void IOmngr::run(){
    int rc;

    rc = pthread_create(&tid,NULL,IOmngr::mainloop,(void *)NULL); // TODO: think what argument(s) we might want to pass to it

    if(rc != 0)
    	gtfo("Problem with IOmngr::run() - couldn't start a thread");
};

void IOmngr::dump(){
	std::cout << index << ": " << id << std::endl;
};

std::string IOmngr::current_prompt;
IOmngr *IOmngr::instance;

std::string IOmngr::getInput(){
	std::string result;

	std::cout << IOmngr::current_prompt;
	std::cin >> result;
	return result;
};

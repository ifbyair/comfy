#ifndef COMPONENT_H_INCLUDED
#define COMPONENT_H_INCLUDED
#include <iostream>
#include "worker.h"
#include "channel.h"

class Component: protected Worker, protected Channel {
protected:   
    std::string id;
    virtual void mainloop() =0;
    int protection_status;
public:
    Component(){};
    virtual ~Component(){};
    virtual void run() =0;
    virtual void dump() =0;
    virtual void send() =0;
    virtual void receive() =0;
};

class Cronos: public Component {
//	std::string id;
    long status;
    void mainloop();
public:
    Cronos(std::string i){ id = i; };
    ~Cronos(){};
    void run();
    void dump();
    void send();
    void receive();
};

class IOmngr: public Component {
//	std::string id;
    void mainloop();
    std::string current_prompt;
public:
	IOmngr(std::string i){ 
        id = i;
        current_prompt = "main > ";
    };
	~IOmngr(){};
	void run();
	void dump();
	void send();
	void receive();
    std::string getInput();
};
#endif

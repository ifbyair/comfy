#ifndef COMPONENT_H_INCLUDED
#define COMPONENT_H_INCLUDED
#include <iostream>
#include "worker.h"
#include "channel.h"
#include <pthread.h>

class Component: protected Worker, protected Channel {
protected:   
    std::string id;
    pthread_t tid;
    // virtual void *mainloop(void *) =0;
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
    long status;
    void *mainloop(void *);
public:
    Cronos(std::string i){ id = i; };
    ~Cronos(){};
    void run();
    void dump();
    void send();
    void receive();
};

class IOmngr: public Component {
    static void *mainloop(void *);
    static std::string getInput();
    static std::string current_prompt;
public:
	IOmngr(std::string i){
        id = i;
        IOmngr::current_prompt = "main > ";
    };
	~IOmngr(){};
	void run();
	void dump();
	void send();
	void receive();
};
#endif

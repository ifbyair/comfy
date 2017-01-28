#ifndef COMPONENT_H_INCLUDED
#define COMPONENT_H_INCLUDED
#include <iostream>
#include "worker.h"
#include "channel.h"
#include <pthread.h>

class Component: protected Worker, protected Channel {
protected:   
    std::string id;
    int index;
    pthread_t tid;
    int protection_status;
public:
    Component(){};
    virtual ~Component(){};
    virtual void run() =0;
    virtual void dump() =0;
    virtual void send(Message *) =0;
    virtual Message *receive() =0;
    void setIndex(int i){ index = i; };
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
    Message *receive();
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
	void send(Message *);
	Message *receive();
};
#endif

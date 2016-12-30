#ifndef COMPONENT_H_INCLUDED
#define COMPONENT_H_INCLUDED
#include <iostream>
#include "worker.h"
#include "channel.h"

class Component: protected Worker, protected Channel {
    int id;
protected:
    int protection_status;
public:
    Component(){};
    virtual ~Component(){};
    virtual void run() =0;
    virtual void dump() =0;
};

class Cronos: public Component {
	std::string id;
    long status;
public:
    Cronos(std::string i){ id = i; };
    ~Cronos(){};
    void run();
    void dump();
    void send();
    void receive();
};
#endif

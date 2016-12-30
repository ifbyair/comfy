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
    long status;
public:
    Cronos(){};
    virtual ~Cronos(){};
    virtual void run();
    virtual void dump();
    void send();
    void receive();
};
#endif

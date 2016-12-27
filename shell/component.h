#ifndef COMPONENT_H_INCLUDED
#define COMPONENT_H_INCLUDED
#include "worker.h"
#include "channel.h"

class Component: protected Worker, protected Channel {
    int id;
protected:
    std::string protection_status;
public:
    virtual void run() =0;
    virtual void dump() =0;
};

class Cronos: public Component {
    long status;
public:
    void run();
    void send();
    void receive();
};
#endif

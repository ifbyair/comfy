#ifndef WORKER_H_INCLUDED
#define WORKER_H_INCLUDED
#include <queue>
#include "message.h"

class Worker {
    int id;
protected:
    std::queue <Message *> inbox;
    std::queue <Message *> outbox;
public:
    virtual void run() =0;
    void dump();
};

#endif

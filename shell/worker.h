#ifndef WORKER_H_INCLUDED
#define WORKER_H_INCLUDED
class Worker {
    int id;
public:
    virtual void run() =0;
    void dump();
};
#endif

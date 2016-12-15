#ifndef CHANNEL_H_INCLUDED
#define CHANNEL_H_INCLUDED
#include "message.h"

class Channel {
    std::queue <Message *> up;
    std::queue <Message *> down;
    int id;
public:
    void dump();
};
#endif

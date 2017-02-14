#ifndef CHANNEL_H_INCLUDED
#define CHANNEL_H_INCLUDED
#include "message.h"

class Channel {
    std::queue <Message *> up;
    std::queue <Message *> down;
    int id;
protected:
	void send_up(Message *);
	void send_down(Message *);

	Message *check_in();
	Message *check_out();
public:
    void dump();
};
#endif

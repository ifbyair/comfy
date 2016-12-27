#include <iostream>
#include <queue>
#include "channel.h"
#include "message.h"

void Channel::dump(){
    std::cout << id << std::endl;
}

void Channel::send_up(Message *m){
	up.push(m);
}

void Channel::send_down(Message *m){
	down.push(m);
}

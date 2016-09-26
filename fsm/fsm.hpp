#ifndef FSM_H_ICLUDED
#define FSM_H_ICLUDED

namespace fsmEvents {
	// Event types - push, poll, timer, and interrupt
	enum event_t {EPOLL,EPUSH,ETIMER,EINTERRUPT};
	
}
#endif
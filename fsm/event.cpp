#include <stdio.h>
#include <iostream>
#include <exception>
#include "fsm.hpp"

class Node;

class Event{
	int id;
	fsmEvents::event_t type;
	Node * destination;
public:
	Event();
	~Event();
	void dump();
};

void Event::dump(){
	std::cout << "Event" << id << "\n";
}
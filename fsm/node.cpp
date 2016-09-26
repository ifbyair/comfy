#include <stdio.h>
#include <iostream>
#include <exception>
#include <vector>

// class Event;

class Node
{
	int id;
//	std::vector<Event *> events;
public:
	Node(int);
	~Node();
	void dump();
};

Node::Node(int nid){
	id = nid;
}

void Node::dump(){
	printf("Node %d\n",id);
}

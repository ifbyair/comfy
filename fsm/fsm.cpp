#include <stdio.h>
#include <iostream>
#include <vector>
#include "fsm.hpp"

class Event;

// defining class Node
class Node
{
	int id;
	std::vector<Event *> events;
	std::string status;
public:
	Node(int, std::string);
	void dump();
};

Node::Node(int nid, std::string st){
	id = nid;
	status = st;
}

void Node::dump(){
	std::cout << "Node" << id << ":" << status << "\n";
}
// Class Node defined

// Defining class FSM for Final State Machine
class FSM {
	std::vector<class Node> nodes;
	Node * cursor;
public:
	FSM(std::vector<class Node>);
	void traverse();
};

FSM::FSM(std::vector<class Node> v){
	nodes = v;
	cursor = &nodes[0];
}

void FSM::traverse(){
	int i;
	for(i=0; i<nodes.size(); i++)
		nodes[i].dump();
}
// Class FSM defined

int main(){
	std::vector<class Node> fsm1;

	fsm1.push_back(Node(0,"Start"));
	fsm1.push_back(Node(1,"Are you ready"));
	fsm1.push_back(Node(2,"Password"));

	FSM f(fsm1);

	f.traverse();
}
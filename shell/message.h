#ifndef MESSAGE_H_INCLUDED
#define MESSAGE_H_INCLUDED

class Message{
    int id;
    std::string payload;
public:
	Message(std::string);
	~Message();
    void dump();
};

#endif

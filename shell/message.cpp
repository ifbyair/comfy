#include <iostream>
#include "message.h"

void Message::dump(){
    std::cout << "My payload: " << payload << std::endl;
}

Message::Message(std::string s){
	payload = s;
}

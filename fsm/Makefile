CC=g++
CFLAGS=-I. -I../wiringPi/wiringPi -I../wiringPi/devLib -Wno-c++11-extensions
SRCS=event.cpp fsm.cpp
OBJS=$(SRCS:.cpp=.o)
DEPS=fsm.hpp
LIBS=
# LIBS=-lwiringPi -lwiringPiDev
EXEC=fsm

$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@ $(LIBS)

%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $(CFLAGS) $<

clean: 
	rm -f $(OBJS) $(EXEC)

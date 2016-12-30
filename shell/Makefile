CC=g++
CFLAGS=-I. -std=c++11
SRCS=shell.cpp worker.cpp channel.cpp message.cpp component.cpp
OBJS=$(SRCS:.cpp=.o)
DEPS=shell.h worker.h channel.h message.h component.h
LIBS=
# LIBS=-lwiringPi -lwiringPiDev
EXEC=cshell

$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@ $(LIBS)

%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $(CFLAGS) $<

clean: 
	rm -f $(OBJS) $(EXEC)

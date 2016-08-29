CC=g++
CFLAGS=-I. -I../wiringPi/wiringPi -I../wiringPi/devLib
SRCS=fsm.cpp
OBJS=$(SRCS:.c=.o)
DEPS=
LIBS=
# LIBS=-lwiringPi -lwiringPiDev
EXEC=fsm

$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@ $(LIBS)

%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $(CFLAGS) $<

clean: 
	rm -f $(OBJS) $(EXEC)

CC=g++
CFLAGS=-I. -I../wiringPi/wiringPi -I../wiringPi/devLib -Wno-c++11-extensions
SRCS=t.cpp
OBJS=$(SRCS:.cpp=.o)
DEPS=
LIBS=
# LIBS=-lwiringPi -lwiringPiDev
EXEC=t

$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@ $(LIBS)

%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $(CFLAGS) $<

clean: 
	rm -f $(OBJS) $(EXEC)

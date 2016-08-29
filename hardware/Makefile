CC=g++
CFLAGS=-DSIMULATION
SRCS=pins.cpp
OBJS=$(SRCS:.cpp=.o)
DEPS=
LIBS=
# LIBS=-lwiringPi -lwiringPiDev
EXEC=pins

$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@ $(LIBS)

%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $(CFLAGS) $<

clean: 
	rm -f $(OBJS) $(EXEC)

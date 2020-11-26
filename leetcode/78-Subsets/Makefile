TAR=test
CC=g++
CPPFLAGS=-Wall -O0 -std=c++11 -I../catch2
LIBS=

SRCS=$(wildcard *.cpp)
OBJS=$(SRCS:.cpp=.o)

$(TAR) : $(OBJS)
	$(CC) $^ $(CPPFLAGS) -o $@

%.o : %.c
	$(CC) $(CPPFLAGS) -c $< 

.PHONY : clean
clean:
	rm $(OBJS) TAR

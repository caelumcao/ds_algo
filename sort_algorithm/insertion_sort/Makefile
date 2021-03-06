TAR=test
CC=g++
CPPFLAGS=-Wall -O0 -std=c++11 -Wno-unused-function -I..
LIBSLDFLAGS=

SRCS=$(wildcard *.cpp)
HEADERS=$(wildcard *.h)
OBJS=$(SRCS:.cpp=.o)
DEPS=$(SRCS:.cpp=.d)

$(TAR) : $(OBJS)
	$(CC) $^ $(CPPFLAGS) $(LIBSLDFLAGS) -o $@

ifneq ($(MAKECMDGOALS), clean)
include $(DEPS)
endif

%.d: %.cpp
	set -e; rm -f $@; \
	$(CC) -MM $(CPPFLAGS) $< > $@.$$$$; \
	sed 's,\($*\)\.o[ :]*,\1.o $@ : ,g' < $@.$$$$ > $@; \
	rm -f $@.$$$$

.PHONY : clean
clean:
	rm -f $(OBJS) $(DEPS) $(TAR)

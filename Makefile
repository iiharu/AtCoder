CXX := g++
CXXFLAGS := -std=c++14 -Wall -Wextra -Wc++14-compat
LDFLAGS := -lc -lstdc++

.PHONY: all clean

all: main

main: main.o
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $<

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

clean:
	$(RM) $(wildcard *.d) $(wildcard *.o) $(wildcard *.out)

CXX := g++
CXXFLAGS := -std=c++14 -Wall -Wextra -Wc++14-compat
LDFLAGS := -lc -lstdc++
TARGET := main

.PHONY: all clean

all: main

main: main.o
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $< -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) $(TARGET) $(wildcard *.d) $(wildcard *.o) $(wildcard *.out)

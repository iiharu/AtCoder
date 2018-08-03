CXX := g++
CXXFLAGS := -std=c++14 -Wall
LDFLAGS := -lc -lstdc++
TARGET := main
SOURCE := $(wildcard *.cpp)
OBJ := $(addsuffix .o, $(basename $(wildcard *.cpp)))

all: $(TARGET)

$(TARGET): $(addsuffix .o, $(TARGET))
	$(CXX) $(CXXFLAGS) $(LDFLAGS) -o $@ $<

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	$(RM) $(basename $(wildcard *.cpp)) $(addsuffix .o, $(basename $(wildcard *.cpp)))

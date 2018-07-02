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

format:
	@$(foreach file, $(wildcard *.cpp), clang-format -i $(file);)
	@$(foreach file, $(wildcard *.hpp), clang-format -i $(file);)

clean:
	$(RM) $(basename $(wildcard *.cpp)) $(addsuffix .o, $(basename $(wildcard *.cpp)))

CXX := clang++
CXX := $(if $(shell which clang++), clang++, g++)
CXXFLAGS := -std=gnu++14 -O2 -Wall -Wextra
LDFLAGS := -lc -lstdc++
TARGET := main
SRCS := main.cpp

all: $(TARGET)

clean:
	$(RM) $(TARGET)

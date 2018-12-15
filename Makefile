CXX      := g++
CXXFLAGS := -std=c++14 -Iinclude -Wall -Wextra -Wc++14-compat
LDFLAGS  := -lc -lstdc++
ASTYLE   := astyle
TARGET   := main

all: $(TARGET)

clean:
	$(RM) $(wildcard *.d) $(wildcard *.o) $(wildcard *.out) $(wildcard *.orig)

distclean: clean
	$(RM) $(TARGET)

format: $(addsuffix .cpp,$(TARGET))
	$(ASTYLE) $<

.PHONY: clean distclean format

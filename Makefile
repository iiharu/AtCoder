CXX      := $(if $$(which clang++), clang++, g++)
CXXFLAGS := -std=gnu++14 -O2 -Wall -Wextra -Wc++14-compat
LDFLAGS  := -lc -lstdc++
TARGET   := main

all: $(TARGET)

clean:
	$(RM) $(TARGET)

.PHONY: clean

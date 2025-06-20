# Compiler and flags
CXX      := g++
CXXFLAGS := -std=c++17 -Wall -Wextra

# Where to put all binaries
BUILD_DIR := build

# All exercise .cpp files
SRCS := $(wildcard chapters/chapter1/exercises/*.cpp)
# Strip path and .cpp to get names
PROGS := $(patsubst chapters/chapter1/exercises/%.cpp, $(BUILD_DIR)/%, $(SRCS))

all: $(PROGS)

# Rule to build each program
$(BUILD_DIR)/%: chapters/chapter1/exercises/%.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) $< -o $@

# Make sure build folder exists
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

.PHONY: all clean

clean:
	rm -rf $(BUILD_DIR)

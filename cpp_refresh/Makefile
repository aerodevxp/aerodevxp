CXX = g++
CXXFLAGS = -std=c++17

SRCS = main.cpp $(wildcard *.cpp) $(wildcard lib/**/*.cpp)
OBJS = $(SRCS:.cpp=.o)
TARGET = main

all: $(TARGET)

#Link o's into binary
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

# how to turn cpps into o
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up compiled files
clean:
	rm -f $(OBJS)
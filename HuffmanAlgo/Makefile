CXX = clang++
CXXFLAGS = -Wall -std=c++17

all: main_c main_d

main_c: Source/encode.cpp Source/config.cpp Source/functions.h
	$(CXX) $(CXXFLAGS) Source/encode.cpp Source/config.cpp -o main_c

main_d: Source/decode.cpp Source/config.cpp Source/functions.h
	$(CXX) $(CXXFLAGS) Source/decode.cpp Source/config.cpp -o main_d

clean:
	rm -f main_c main_d

.PHONY: all clean

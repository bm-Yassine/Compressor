CXX = clang++
CXXFLAGS = -Wall -std=c++20

SRC = main.cpp CommandHandler.cpp tree/Tree.cpp operations/FileIO.cpp operations/Huffman.cpp operations/lz77.cpp

deflate: $(SRC) CommandHandler.h Common.h tree/Tree.h tree/Node.h operations/FileIO.h operations/Huffman.h operations/lz77.h
	$(CXX) $(CXXFLAGS) $(SRC) -o deflate

clean:
	rm -f deflate

.PHONY: clean

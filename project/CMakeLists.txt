cmake_minimum_required(VERSION 3.21)
project(deflate)

set(CMAKE_CXX_STANDARD 23)

add_executable(deflate main.cpp CommandHandler.cpp CommandHandler.h Common.h tree/Tree.cpp tree/Tree.h tree/Node.h operations/Huffman.cpp operations/Huffman.h operations/FileIO.cpp operations/FileIO.h operations/lz77.cpp operations/lz77.h)
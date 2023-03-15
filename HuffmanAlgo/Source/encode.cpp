/**
 * @file encode.cpp
 * @author Yassine Bendimerad (yb308985@student.polsl.pl)
 * @brief 
 * @version 0.1
 * @date 2023-01-13
 * 
 * @copyright Copyright (c) 2023
 * 
 * A lossless compression using Huffman algorithm
 * 
 * CPP FILE to run the compression an INPUT TEXT FILE to a compressed (.huf) file.
 */
#include <iostream>
#include "functions.h"

int main(int argc, char* argv[]) {
    if (argc != 3) {
        //Error message if failed to detect file
        std::cout<<"Failed to detect Files";
        exit(1);
    }
    
    // starting the compression
    huffman f(argv[1], argv[2]);
    f.compress();
    cout<<"Compressed successfully"<<std::endl;

    return 0;

}
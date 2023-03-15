/**
 * @file decode.cpp
 * @author Yassine Bendimerad (yb308985@student.polsl.pl)
 * @brief 
 * @version 0.1
 * @date 2023-01-13
 * 
 * @copyright Copyright (c) 2023
 * 
 * CPP file to run the decompression the ENCODED OUTPUT FILE to OUTPUT FILE similar to the first input file.
 */
#include <iostream>
#include "functions.h"

int main(int argc, char* argv[]) {
    //error message if failed to detect file
    if(argc != 3){
        std::cout<<"Failed to detect Files";
        exit(1);
    }

    //starting the decompression
    huffman f(argv[1], argv[2]);
    f.decompress();
    std::cout<<"Decompressed successfully"<<std::endl;

    return 0;

}
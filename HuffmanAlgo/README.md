# Program that allows compressing and decompressing files using Huffman's algorithm. 

How to run the program:
go to HuffmanAlgo,
for encoding : 
    ./main_c <inputFile.txt> <outputFile.huf>
for decoding 
    ./main_d <inputCompressed.huf> <outputDecompressed.txt>
    
Compiled with :
HuffmanAlgo % clang++ encode.cpp config.cpp -o main_c
HuffmanAlgo % clang++ decode.cpp config.cpp -o main_d
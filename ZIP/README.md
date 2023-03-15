Fundamentals of Computer Programming S1 project, ZiP (deflate Algorithm)

This project is an implementation of Deflate (i.e., LZ77 and Huffman Coding) Encoding Algorithm for text input files. The executable file after compiling the project is named deflate.

You can compress and decompress text input files with Deflate with this project. This algorithm uses LZ77 and Huffman Coding algorithms respectively and produces a smaller size output file which can be recovered later.

The commands for these operations are:

./deflate -c -i <inputFile.txt> -o <outputFile.huf>

and

./deflate -d -i <inputFile.huf> -o <outputFile.txt>

so the contents of input.txt and out_decompress.txt files would be the same.

compiled with clang: 
project % clang++ -Wall -std=c++20 main.cpp CommandHandler.cpp tree/Tree.cpp operations/FileIO.cpp operations/Huffman.cpp operations/lz77.cpp -o deflate
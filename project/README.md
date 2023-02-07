Fundamentals of Computer Programming S1 project, ZiP (deflate Algorithm)

This project is an implementation of Deflate (i.e., LZ77 and Huffman Coding) Encoding Algorithm for text input files. The executable file after compiling the project is named deflate.

You can compress and decompress text input files with Deflate with this project. This algorithm uses LZ77 and Huffman Coding algorithms respectively and produces a smaller size output file which can be recovered later.

The commands for these operations are:

./deflate -c <input file> <output file>

and

./deflate -d <input file> <output file>

and the contents of input.txt and out_decompress.txt files would be the same.

(as you can see I tried to build using Cmake but i did not have time to learn fully how it works to be able to implement it, i left the files to be able to work on them in the future)
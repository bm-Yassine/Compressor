# HuffmanAlgo (V1)

The first version of the compressor: plain Huffman coding, no LZ77 yet. I kept it in the repo because it's where the tree building, priority queue and bit packing ideas were worked out before the full deflate version in `../ZIP`.

Works on ASCII text files (the code table covers the 128 ASCII values; anything else is rejected with a message).

## Build

```bash
make
```

or manually:

```bash
clang++ -Wall -std=c++17 Source/encode.cpp Source/config.cpp -o main_c
clang++ -Wall -std=c++17 Source/decode.cpp Source/config.cpp -o main_d
```

## Usage

Encoding:

```
./main_c inputFile.txt compressedFile.huf
```

Decoding:

```
./main_d compressedFile.huf outputFile.txt
```

## File format

The `.huf` file starts with the number of distinct characters, then for each one: the character followed by its Huffman code stored in a fixed 16-byte block (the code is padded with zeros and a `1` marker so it can be recovered). After the header comes the packed bit stream, and the last byte stores how many padding bits were added at the end.

## Files

```
Source/functions.h   the huffman class, Node struct
Source/config.cpp    all the algorithm functions (tree, codes, save/load)
Source/encode.cpp    main for compression
Source/decode.cpp    main for decompression
testFiles/           a sample input with its compressed and decoded output
```

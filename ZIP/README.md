# ZIP (deflate)

Fundamentals of Computer Programming S1 project. An implementation of the Deflate idea - LZ77 followed by Huffman coding - for text files. Compressing gives a smaller `.huf` file that can be decompressed back to the exact original.

## Usage

Compression:

```
./deflate -c -i inputFile.txt -o outputFile.huf
```

Decompression:

```
./deflate -d -i inputFile.huf -o outputFile.txt
```

If the output file already exists the program asks before overwriting it.

## Build

```bash
make
```

or manually:

```bash
clang++ -Wall -std=c++20 main.cpp CommandHandler.cpp tree/Tree.cpp operations/FileIO.cpp operations/Huffman.cpp operations/lz77.cpp -o deflate
```

## How it works

Compression runs in two passes:

1. **LZ77** scans the input with a 32 KB sliding window and replaces repeated fragments with back-references. The output is a token stream where each token is `offset_length_nextChar_` (written as plain text, `_` separated). A token of `0_0_x_` just means the literal character `x`. When the match reaches the end of the input the token ends with `00` instead of a character.
2. **Huffman coding** builds a frequency tree over the LZ77 output and packs it into actual bits.

The `.huf` file layout is: one header line with the Huffman code of each of the 256 possible byte values (space separated, `2` marking bytes that never occur) plus the total number of meaningful bits, then the packed data itself.

Decompression is the same thing backwards: decode the bits with the code table, then replay the LZ77 tokens.

## Results

On the included `testFiles/inputFile.txt` (2.1 MB of text): compressed to ~0.4 MB, about 81% smaller, and the decompressed output is byte-identical to the input (`cmp` clean).

## Limitations

- The LZ77 match search is brute force over the whole window, so compressing large files takes a while. A real implementation would use a hash chain like zlib does.
- LZ77 tokens are stored as readable text before the Huffman pass, which wastes some potential - packing them as binary would compress noticeably better.
- Decompression assumes a well-formed `.huf` file; a corrupted or hand-edited archive can produce garbage or an error.

## Structure

```
main.cpp                argument checks, overwrite prompt
CommandHandler.{h,cpp}  runs the compress/decompress pipeline
operations/lz77.*       LZ77 encode/decode
operations/Huffman.*    Huffman encode/decode
operations/FileIO.*     binary-safe file read/write
tree/Node.h, Tree.*     the Huffman tree
testFiles/              sample inputs and archives
```

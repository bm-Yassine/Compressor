#ifndef COMPRESSOR_HUFFMANCODEC_H
#define COMPRESSOR_HUFFMANCODEC_H

#include "../Common.h"
#include "../tree/Tree.h"
 
//header huffman file, to call the functions in other .cpp files

class HuffmanCodec {
public:
    static void compress(Tree *tree, string *firstLine, string *compressed, const string &fileContent);
    static void decompress(const string &keys, const string &compressed, string *decompressed);

private:
    static int getHuffmanCodes(map<string, unsigned char> *codeToCharMap, const string &keys);
};


#endif //COMPRESSOR_HUFFMANCODEC_H
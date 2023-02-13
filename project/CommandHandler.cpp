#include "CommandHandler.h"
#include "tree/Tree.h"
#include "operations/Huffman.h"
#include "operations/FileIO.h"
#include "operations/lz77.h"

/**
 * @brief checks the command, outputs error if not the right command
 * and runs the functions related to either compressing or decompressing the file
 * also writes the new output file
 * 
 * compressing: read input, lz77 compression, make new tree, huffman compression, write output in new file
 * decompression: read input, huffman decompression, lz77 decoding, write output in .txt file
 */

void CommandHandler::execute() {
    vector<string> result;
    string inputFileContent;
    FileIO::read(inputFile, inputFileContent); 

    if (command == "-c" ) {
        string lzCompressed;
        LZ77Codec::compress(inputFileContent, &lzCompressed);

        Tree *tree = new Tree();
        tree->makeTree(lzCompressed);

        string firstLine, huffmanCompressed;
        HuffmanCodec::compress(tree, &firstLine, &huffmanCompressed, lzCompressed);
        

        result.push_back(firstLine);
        result.push_back(huffmanCompressed);
        FileIO::write(outputFile, result);
    }
    
    else if(command == "-d") {
        size_t lineBreak = inputFileContent.find('\n');
        string keys = inputFileContent.substr(0, lineBreak);
        string compressed = inputFileContent.substr(lineBreak + 1);

        string huffmanDecompressed;
        HuffmanCodec::decompress(keys, compressed, &huffmanDecompressed);

        string lzDecompressed;
        LZ77Codec::decompress(huffmanDecompressed, &lzDecompressed);

        result.push_back(lzDecompressed);
        FileIO::write(outputFile, result);
    }
    
    else if (command != "-c" || command !="-d") {
        cout << "Wrong Command: -c for compression; -d for decompression;" << endl;
    }
}
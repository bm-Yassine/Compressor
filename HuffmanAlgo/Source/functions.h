/**
 * 
 * @file Functions.h
 * @author Yassine Bendimerad (yb308985@student.polsl.pl)
 * @brief 
 * @version 0.1
 * @date 2023-01-16
 * 
 * @copyright Copyright (c) 2023
 * 
 *  Header file to define the functions for all CPP files
 */
 
//Header Guards to prevent header files from being included multiple times
#ifndef HUFFMAN_HPP
#define HUFFMAN_HPP
#include <string>
#include <vector>
#include <queue>
#include <fstream>


//Defining Huffman Tree Node
struct Node {
    char data;
    unsigned freq;
    std::string code;
    Node *left, *right;

    Node(){
        left = right = NULL;
    }
};

using namespace std;

class huffman {
    private:
        vector  <Node*> arr;
        fstream inFile, outFile;
        string inFileName, outFileName;
        Node *root;

        class Compare {
            public:
                bool operator() (Node* l, Node* r){
                    return l->freq > r->freq;
                }
        };
        

        priority_queue <Node*, vector<Node*>, Compare> minHeap;
        
        //Initializing a vector of tree nodes representing character's ascii value and initializing its frequency with 0
        void createArr();
        
        //Traversing the constructed tree to generate huffman codes of each present character
        void traverse(Node*, string);
        
        //Function to convert binary string to its equivalent decimal value
        int binToDec(string);
        
        //Function to convert a decimal number to its equivalent binary string
        string decToBin(int);
        
        //Reconstructing the Huffman tree while Decoding the file
        void buildTree(char, string&);

        //Creating Min Heap of Nodes by frequency of characters in the input file
        void createMinHeap();
        
        //Constructing the Huffman tree
        void createTree();
        
        //Generating Huffman codes
        void createCodes();
        
        //Saving Huffman Encoded File
        void saveEncodedFile();
        
        //Saving Decoded File to obtain the original File
        void saveDecodedFile();
        
        //Reading the file to reconstruct the Huffman tree
        void getTree();

    public:
        //Constructor
        huffman(string inFileName, string outFileName)
        {
            this->inFileName = inFileName;
            this->outFileName = outFileName;
            createArr();
        }
        //Compressing input file
        void compress();
        //Decrompressing input file
        void decompress();
};
#endif
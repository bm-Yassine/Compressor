#ifndef COMPRESSOR_TREE_H
#define COMPRESSOR_TREE_H

#include "Node.h"

/**
 * organize the huffman tree funtions  
 */
class compare {
public:
    bool operator()(Node* lhs, Node* rhs) {
        return rhs->getFreq() <= lhs->getFreq();
    }
};

class Tree {
public:
    Tree() {
        root = nullptr;
        for (int i = 0; i < 256; i++) {
            charFreqMap[i] = 0;
        }
    }

    void getCodes(vector<string> *codes);
    void makeTree(const string &inputFileContent);
private:
    Node* root;
    map<unsigned char, int> charFreqMap;
    // priority_queue<Node*, vector<Node*>, decltype([](Node* lhs, Node* rhs) {return rhs->getFreq() <= lhs->getFreq(); })> nodesQueue;
    priority_queue<Node*, vector<Node*>, compare> nodesQueue;

    void fillCharFreqMap(const string &inputFileContent);
    void makeInitialNodes();
    void dfs(Node* node, vector<string> *codes, const string &code);
};


#endif //COMPRESSOR_TREE_H
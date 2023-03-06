#include "Tree.h"

/**
 * @brief Huffman tree making with the frequency of characters and nodes
 *  and gets the new code of each character
 * @param inputFileContent 
 */

void Tree::makeTree(const string &inputFileContent) {
    fillCharFreqMap(inputFileContent);
    makeInitialNodes();

    Node *node1, *node2, *newNode;
    while(nodesQueue.size() > 1) {
        node1 = nodesQueue.top();
        nodesQueue.pop();

        node2 = nodesQueue.top();
        nodesQueue.pop();

        newNode = new Node(node1, node2, node1->getFreq() + node2->getFreq());
        nodesQueue.push(newNode);
    }

    root = nodesQueue.top();
    nodesQueue.pop();
    
}


void Tree::makeInitialNodes() {
    for (int i = 0; i < 256; i++) {
        if (charFreqMap[i] > 0) {
            std::unique_ptr<Node> newNode(new Node(nullptr, nullptr, charFreqMap[i], i));
            nodesQueue.push(newNode.release());
        }
    }
}


void Tree::fillCharFreqMap(const string &inputFileContent) {
    for (unsigned char i : inputFileContent) {
        charFreqMap[i]++;
    }
}

void Tree::getCodes(vector<string> *codes) {
    dfs(root, codes, "");
}

void Tree::dfs(Node *node, vector<string> *codes, const string &code) {
    if (node->getRight() == nullptr && node->getLeft() == nullptr) {
        (*codes)[node->getSymbol()] = code;
    }
    else {
        dfs(node->getRight(), codes, code + "1");
        dfs(node->getLeft(), codes, code + "0");
    }
}
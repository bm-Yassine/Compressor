#include "FileIO.h"

/**
 * @brief input file reading function
 * 
 * @param filename 
 * @param content 
 */

void FileIO::read(const string &filename, string &content) {
    ifstream infile(filename, std::ios::binary);

    // read the whole file as-is: splitting on '\n' and rejoining
    // corrupted compressed data and dropped trailing newlines
    stringstream buffer;
    buffer << infile.rdbuf();
    content = buffer.str();

    infile.close();
}

/**
 * @brief output file writing function
 * 
 * @param filename 
 * @param content 
 */

void FileIO::write(const string &filename, const vector<string> &content) {
    ofstream outfile(filename, std::ios::out | std::ios::binary);

    for (const string& s: content) {
        outfile << s;
    }

    outfile.close();
}
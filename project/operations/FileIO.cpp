#include "FileIO.h"

/**
 * @brief input file reading function
 * 
 * @param filename 
 * @param content 
 */

void FileIO::read(const string &filename, string &content) {
    ifstream infile(filename, std::ios::binary);

    string line;                   //line by line
    while (getline(infile, line)) {
        content += line + "\n";
    }
    // string binaryIn;                 //all in
    // while(getline(infile, binaryIn, '\0')){
    // content += binaryIn;
    // }
    content.erase(content.size()-1);

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
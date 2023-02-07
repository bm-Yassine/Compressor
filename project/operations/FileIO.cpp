#include "FileIO.h"

/**
 * @brief input file reading function
 * 
 * @param filename 
 * @param content 
 */

void FileIO::read(const string &filename, string &content) {
    ifstream infile(filename);

    string line;
    while (getline(infile, line)) {
        content += line + "\n";
    }
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
    ofstream outfile(filename);

    for (const string& s: content) {
        outfile << s;
    }

    outfile.close();
}
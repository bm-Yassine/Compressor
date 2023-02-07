#ifndef COMPRESSOR_FILEIO_H
#define COMPRESSOR_FILEIO_H

#include "../Common.h"

// fileIO header file to call the commands in other .cpp files

class FileIO {
public:
    static void read(const string &filename, string &content);
    static void write(const string &filename, const vector<string> &content);
};


#endif //COMPRESSOR_FILEIO_H
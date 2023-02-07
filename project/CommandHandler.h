#ifndef COMPRESSOR_COMMANDHANDLER_H
#define COMPRESSOR_COMMANDHANDLER_H

#include "Common.h"

/**
 * @brief command handler header file to call the commandHandler.cpp from main.cpp file
 * 
 */
class CommandHandler {
public:
    CommandHandler(string inputFile, string outputFile, string command): inputFile(inputFile), outputFile(outputFile), command(command) {}
    void execute();
private:
    string inputFile;
    string outputFile;
    string command;
};

#endif //COMPRESSOR_COMMANDHANDLER_H
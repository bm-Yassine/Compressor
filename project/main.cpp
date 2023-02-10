#include "CommandHandler.h"

using namespace std;

/**
 * @brief main function checking the number of arguments, 
 * assigning each argument to its role,
 * and executes the code
 */
int main(int argc, char *argv[]) {
    if (argc != 4) {
        cout << "Wrong number of arguments" << endl;
    }
    else {
        string command = argv[1];
        string inputFilename = argv[2];
        string outputFilename = argv[3];

        // CommandHandler *commandHandler = new CommandHandler(inputFilename, outputFilename, command);
        CommandHandler commandHandler(inputFilename, outputFilename, command);
        commandHandler.execute();
        // delete commandHandler;
    }
    return 0;
}
    
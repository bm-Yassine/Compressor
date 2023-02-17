#include "CommandHandler.h"

using namespace std;

/**
 * @brief main function checking the number of arguments, 
 * assigning each argument to its role,
 * and executes the code
 */
int main(int argc, char *argv[]) {
    // check number of arguments 
    if (argc != 6) {
        cout << "Wrong number of arguments, the command should follow this pattern :" << endl;
        cout << "Compression : ./deflate -c -i (inputFileName).txt -o (outputFileName).huf"<<endl;
        cout << "Decompression : ./deflate -d -i (inputFileName).huf -o (outputFileName).txt"<< endl;
    }
    
    else {
        string command = argv[1];
        string inArg = argv[2];
        string inputFilename = argv[3];
        string outArg = argv[4];
        string outputFilename = argv[5];
        string confirm;

        // check the input and output files commands
        if (inArg != "-i"  ||  outArg != "-o"){
        cout<< "the input file should be introduced with '-i', and the output file should be introduced with '-o'. "<<endl;
        return 0;
        }

        //check if input file exists
        std::ifstream Infile(inputFilename);
        if (!Infile.good()) {
        cerr << "Error: The file '" << inputFilename << "' does not exist." << endl;
        return 0;
        }

        //check if output file exists and prompt overxrite confirmation
        std::ifstream Outfile(outputFilename);
        if (Outfile.good()) {
            cout << "The file : '" << outputFilename << "' already exists, are you sure to overwrite it ?"<< endl; 
            cout << "To overwrite the file type : 'YES' ,type any other key to abort the program. "<<endl;
            cin >> confirm;
        }

        // getline(Infile, confirm, '\0');
        if (confirm == "YES"  || !Outfile.good()){
        CommandHandler *commandHandler = new CommandHandler(inputFilename, outputFilename, command);
        commandHandler->execute();
        delete commandHandler;
            //(if we dont want to use -new- and pointers :)
            //CommandHandler commandHandler(inputFilename, outputFilename, command);
            //commandHandler.execute();
        } 
        
    }
    return 0;
}   
    
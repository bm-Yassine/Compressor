#include <iostream>
#include <string>
#include "commands.h"

int main() {
    int N, min, max, inL;
    std::string f;
    std::cout<<"Please input in this order : <number of numbers> <min> <max> <no in line> [<output file name>]\n";
    std::cin>>N;
    std::cin>>min;
    std::cin>>max;
    std::cin>>inL;
    std::cin>>f;//Wrong interface
    //random_numbers(N, min, max, inL, f);




    /*
    srand(time(NULL));
    int value;
    std::ofstream file ("numbers.txt");
    int i = 0;
    while (i < 1000000)
    {
        value = rand(); 
        file << value;
    }
    file.close();
    */

}//Rather poor code.


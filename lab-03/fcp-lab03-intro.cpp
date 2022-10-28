#include <iostream>   // C++ input/output library 

int main () 
{
    // loops
    
    // 1. 
    std::cout << std::endl << "while" << std::endl;
    
    bool condition = true;
    
    int i = 0;
    while (i < 10)
    {
        // the body of the loop 
        std::cout << i << " ";
        i++;
    }
    
    // 2.
    std::cout << std::endl << "do-while" << std::endl;
    std::cout << "i == " << i << std::endl;
    do 
    {
        // body 
        std::cout << i << " ";
        i--;
    } while (i > 0);
    
    // 3. 
    
    std::cout << std::endl << "for" << std::endl;
    
    for ( int i = 0 ; i < 10 ; i++)
    {
        // the body of the loop 
        std::cout << i << " ";
    }
    
    
    
    // ARRAY
    std::cout << std::endl;
    std::cout << "===========" << std::endl;
    std::cout << "arrays" << std::endl;
    
    int array_int [5];   // a collection of 5 ints
    array_int[0] = 9;        // the zeroth item (indices start with 0)
    std::cout << array_int[0] << std::endl;
    
    array_int[4] = 15;        // the last item (indices end with size - 1)
    std::cout << array_int[4] << std::endl;
    
    
    for (int i = 0; i < 5; i++)
        array_int[i] = i + 2;
    
    // print the values:
    for (int i = 0; i < 5; i++)
        std::cout << array_int[i] << " ";
    std::cout << std::endl;
    
    
    return 0;
} 



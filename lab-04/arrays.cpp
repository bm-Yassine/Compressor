
#include <cstdlib>
#include <ctime>
#include <iostream>

int main(){

    std::srand(std::time(0));   
    int random_value = std::rand()%10;
    std::cout<<random_value;
}
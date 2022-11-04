#include <ctime>
#include <cstdlib>
#include <iostream>

int main(){
    std::srand(std::time(0));
    std::cout<<"How big should the array be?\n";
    int r;
    std::cout<<"Columns:\n";
    std::cin>>r;
    int array[r];
    for(int i=0;i<r;i++){
        array[i]=std::rand()%10;
            std::cout<<array[i]<<' '<<std::endl;
    }
    std::cout<<array[2]<<std::endl;

}
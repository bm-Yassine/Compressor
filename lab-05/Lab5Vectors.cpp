#include <iostream>  
#include <random>
#include <chrono>
#include <vector>  
#include <cmath>

void rVector(int l){
    std::vector<int> random_array;
    int v;
    for (int i=0; i < l ; i++){
        v = std::rand()%10;
        random_array.push_back(v);
        std::cout << random_array[i] << "\t";
    }
    std::cout<<std::endl;
}

void pVector(int l){
    std::vector<int> random_array;
    rVector(l);
    for (int a : random_array){
        std::cout << random_array[a] << "\t";
    }
    std::cout<<std::endl;
}

int main(){
    int l;
    std::cin>>l;
    rVector(l);
    pVector(l);
}

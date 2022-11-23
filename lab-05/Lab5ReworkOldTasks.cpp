#include <ctime>
#include <cstdlib>
#include <iostream>


//function 1
void RAG(int r){
    int array[r];
    std::srand(std::time(0));
    for(int i=0;i<r;i++){
        array[i]= (std::rand() % 10);
    }
}
//function 2
void pRAG(int r){
    int array[r]; 
    RAG(r);
    for(int i=0;i<r;i++){
        std::cout<<array[i]<<"\t";
    }
    std::cout<<std::endl;
}
//function 3
void ASort(int r){
    int s, array[r];
    RAG(r);
    for ( int i = 0; i < r-1; i++){
        s = i;
        for (int j = i+1; j < r; j++)
        if (array[j] < array[s]){
            s = j;
        }   
        if(s!=i){ 
           std::swap(array[i],array[s]);
        }   
    }
}



int main(){

    //test function 1 and 2
    int r, array[r];
    std::cout<<"≈How much random numbers do you want ?\n";
    std::cin>>r;
    pRAG(r);



}
//Empty

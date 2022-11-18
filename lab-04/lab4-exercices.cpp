#include <ctime>
#include <cstdlib>
#include <iostream>


int main(){

    //Ex1
    
    std::srand(std::time(0));
    int r = 0;
    std::cout<<"≈How much random numbers do you want ?\n";
    std::cin>>r;
    int array[r];//It works only with gcc compiler
    for(int i=0;i<r;i++){
        array[i]=std::rand()%10;
        std::cout<<array[i]<<"\t";//let it be but should be separated
    }

    //Ex2
    int min = array[0]; int index;
    for (int i = 1;  i < sizeof(array)/sizeof(array[0]); ++i){
        if (array[i] < min) {
            min = array[i];
            index = i;
        }
    }
    std::cout<<"\n≈The smallest number from that list is : "<<min<<std::endl<<"indexed in the array as i="<<index<<std::endl;

    //Ex3
    int min_idx,temp = 0;
    for ( int i = 0; i < r-1; i++){
        min_idx = i;
        for (int j = i+1; j < r; j++)
        if (array[j] < array[min_idx]){
            min_idx = j;
        }   
        if(min_idx!=i){    
            // temp = array[i];
            // array[i] = array[min_idx];
            // array[min_idx] = temp;Not necessary. Yo can us standard swap function
            std::swap(array[i],array[min_idx]);
        }  
    }
    std::cout<<"≈Sorted list of elements is\n";  
    for(int i=0;i < r;i++)  
        {  
        std::cout<<array[i]<<"\t";  
    } 


    //Ex4
    int R,C = 0;
    std::cout<<"\n≈Whats the Size of the 2 Dimensional randomly generated Array ?\n"<<"Rows : ";
    std::cin>>R;
    std::cout<<"Columns : ";
    std::cin>>C;
    int array2D[R][C];//only in gcc
    for(int j=0;j<R;j++){
        for(int i=0;i<C;i++){
            array2D[j][i]=std::rand()%10;
            std::cout<<array2D[j][i]<<"\t";
        }
        std::cout<<std::endl;
    }

    //Ex5
    std::cout<<"\n≈Same sized array but snake filled by increasing integers : \n(selected rows and columns from task 4 are inversed to match the integers to the task's exemple) \n";
    int N = 1; int pr = 1;
    //Ok. But this is transposition of the matrix. Inversion of the matrix is different and much more complicated to calculate.
    //we assign the snake values to their array index
    for(int j=0;j<R;j++){
        if (pr == 1){
            for(int i=0;i<C;i++){
                array2D[j][i] = N;
                N++;
            }
            pr++;
        }
        else {
            int n = N - 1 + C;
            for(int i=0;i<C;i++){
                array2D[j][i] = n;
                n--; N++;
            }
            pr--;
        }
    }
    //now we print the array with the rows and columns transposed
    for(int j=0;j<C;j++){
        for(int i=0;i<R;i++){
            std::cout<<array2D[i][j]<<"\t";
        }
        std::cout<<std::endl;
    }
}
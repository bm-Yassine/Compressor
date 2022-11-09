#include <iostream>

int main(){
    bool condition = true;
    

    // Ex1
    
    int i = 0;
    int n = 0;
    std::cout<<"_Ex1"<<std::endl<< "How many asterisks in a line do you need ?"<<std::endl;
    std::cin>> n ;
    while (i < n)
    {
        std::cout << "*";
        i++;
    }
    std::cout<<std::endl;


    //Ex2

    int I = 0;
    int N = 0;
    std::cout<<"_Ex2"<<std::endl<< "How many alternating asterisks and dots in a line do you need ?"<<std::endl;
    std::cin>> N ;
    while (I < N)
    {
        std::cout << "*";
        I++;
        if (I < N){
            std::cout << ".";
            I++;
        }
    }
    std::cout<<std::endl;


    //Ex3

    int r = 0;
    int c = 0;
    int R = 0;
    int C = 0;
    
    std::cout<<"_Ex3"<<std::endl<< "Rows : ";
    std::cin>> R;
    std::cout<< "Columns : ";
    std::cin>> C;
   
    while ( r < R ){
        while ( c < C ){
            std::cout<<"X";
            c++; 
        }
        r++;
        std::cout<<std::endl;
        c = 0;
        if ( r < R ){
            while ( c < C ){
                std::cout<<".";
                c++; 
            } 
            r++;
            std::cout<<std::endl;
            c = 0;
        }
    }


    //Ex4

    int s = 0;
    int l = 0;

    std::cout<<"_Ex4"<<std::endl<< "What is the length of the side of your square ? "<<std::endl;
    std::cin>> s;
   
    for ( int L = 0 ; L < s ; L++ ) {
        while ( l < L ){
            std::cout<<".";
            l++;
        }
        while ( l < s ){
            std::cout<<"X";
            l++;
        }
        std::cout<<std::endl; 
        l = 0;
    }


    //Ex5

    int col = 0;
    int lcb = 0;
    int pr, rp = 1;
    std::cout<<"_Ex5"<<std::endl<< "What is the length of the side of your ChessBoard ? "<<std::endl;
    std::cin>> lcb;
   
    for ( int rw = 0 ; rw < lcb ; rw++ ) {
        //setting the priority of X or . alternatively on each row
        if (rp == 1)
            pr =1;
        else 
            pr=2;
        //alternating the output
        while (col < lcb){
            if (pr == 1){
                std::cout << "X";
                pr++;
            }
            else {
                std::cout << ".";
                pr--;
            }
            col++;
        }
        std::cout<<std::endl;
        col = 0;
        //resetting the priority for the next row
        if(rp == 1)
            rp++;
        else
            rp--;
    }


    //Ex6
    
    double ls = 0;
    int S, ro = 0;
    std::cout<<"_Ex6"<<std::endl<<"What's the length of the box ? (preferebly an even number for equal sized squares) "<<std::endl;
    std::cin>> ls;

    while (ro < (ls/2)) {
        //resetting the loop
        S = 0;
        std::cout<<std::endl; 
        //body
        while ( S < (ls/2) ){
            std::cout<<"X";
            S++;
        }
        while ( S < ls ){
            std::cout<<".";
            S++;
        }
        ro++;    
    }
    ro--;
    while (ro < ls) {
        while ( S < (ls/2) ){
            std::cout<<".";
            S++;
        }
        while ( S < ls ){
            std::cout<<"X";
            S++;
        }
        std::cout<<std::endl; 
        S = 0;
        ro++;
    }
}
    


    
    

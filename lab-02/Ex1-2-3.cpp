#include <iostream>
#include <cmath>

int main(){

// Ex1: 

    int x,y;
    std::cout<<"Type in 2 numbers"<<std::endl;
    std::cin>>x;
    std::cin>>y;
    std::cout<<(x>y ? "x is bigger" : x==y ? "both numbers are  equal" : "y is bigger" )<<std::endl;
    // a)
    std::cout<<"The arithmatic mean of those numbers is : "<<1.0*(x+y)/2<<std::endl;
    // b)
    std::cout<<"The geometric mean of those numbers is : "<<std::sqrt(x*y)<<std::endl;
    // c)
    std::cout<<"The euclidean norm of those numbers is : "<<std::sqrt(x*x+y*y)<<std::endl;


// Ex2:

    int a,b;
    std::cout<<"Type in 2 numbers"<<std::endl;
    std::cin>>a;
    std::cin>>b;
    float c = 1.0*(-b)/a;
    a==0 ? b==0 ? std::cout<<"x is in R" : std::cout<<"x belongs to an empty set" 
    : std::cout<<"x = "<<c;


//Ex3:

    int A,B,C;
    std::cout<<"input 3 numbers : "<<std::endl;
    std::cin>>A;
    std::cin>>B;
    std::cin>>C;
    double Delta = B*B-4*A*C;
    auto rp = -B/(2*A);
    if( Delta==0){
        std::cout<<"x = "<<rp;
    }
        else if( Delta > 0){
            std::cout<<"we have two real solutions : X1 = "<<(-B - sqrt(Delta))/(2*A);
            std::cout<<" X2 = "<<(-B + sqrt(Delta))/(2*A);
        }
        else {
            auto ip = sqrt(-Delta)/(2*A);
            std::cout<<"we have two complex solutions : X1 = "<<rp<<"+"<<ip<<"*i"<<std::endl;
            std::cout<<" X2 = "<<rp<<"-"<<ip<<"*i"<<std::endl;
        }

    }


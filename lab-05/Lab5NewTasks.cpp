#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
#include <math.h>
#include <stdio.h>
//You need if you want to use memset
#include <cstring>



// function 1
// It should return true or false
// void prime_n(int N){
bool prime_n(int N){
    // bool is_prime = true;
    if (N == 0 or N==1){
        // is_prime = false;
        return false;
    }
    //wrong
    // for ( int i = 2; i<= N/2 ; ++i){
    for ( int i = 2; i * i<= N ; ++i){
        if ( N % i == 0){
            return false;
            // break;
        }
    }
    return true;
    // if ( is_prime )
    //     std::cout << N << " is a prime number\n";
    // else
    //     std::cout << N << " is not a prime number\n";
}


//function 2
// void Sieve(int n){
void Sieve(bool prime[],int n){
    
    // bool prime[n+1];
    // memset(prime, true, sizeof(prime));
    memset(prime, true, sizeof(bool)*(n+1));

    for (int p=2; p*p <= n; p++){
        if(prime[p] == true ){
            for (int i =p*2; i<=n; i+= p)
                prime[i] = false;
        }
    }
    //No displaying should be separate operation
    // for (int p=2; p<=n; p++)
    //    if (prime[p])
    //       std::cout << p << " ";
    // std::cout<<std::endl;
}


//function 3
//Good recursive function next time. I expected iterative version
int gcd(int a, int b){
    if (b == 0)
        return a;
    return gcd(b, a % b);
}


//function 4
// use pow only if power is not integer. Too heavy.
// void int_pow(double r, int p){
double int_pow(double r, int p){
    // double result = pow(r, p);
    return pow(r, p);//but you should multiply p-1 times, not use pow
    // std::cout << r << "^" << p << " = " << result<<std::endl;
}


//function 5 recursively
// Recursive version is the worst version for Fibonacci sequence
int rFib(int i){
    if (i <= 1)
        return i;
    return rFib(i- 1) + rFib(i - 2);
}
//iteratively
int Fib(int j){
    int a = 0, b = 1, c = 0;
    for (int i = 0; i < j; i++) {
        std::cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
    return j;
}



int main()
{
    //test function 1
    int N;
    std::cout<<"≈ Please enter a positive integer\n";
    std::cin>>N;
    // prime_n(N);
    std::cout << prime_n(N);



    //test function 2
    int n;
    std::cout<<"≈ Please enter a positive integer\n";
    std::cin>>n;
    std::cout << "Following are the prime numbers smaller than or equal to " << n << std::endl;
    bool prime[n + 1]; // only in gcc;
    // Sieve(n);
    Sieve(prime, n);
    //Here display prime numbers



    //test function 3
    int a, b;
    std::cout<<"≈input the 2 positive integers to calculate their greatest common divider\n";
    std::cin>>a;
    std::cin>>b;
    std::cout<<"GCD of "<< a <<" and "<< b <<" is "<< gcd(a, b)<<std::endl;


    //test function 4
    double r; int p;
    std::cout << "≈Enter base and exponent\n";
    std::cin >> r >> p;
    int_pow(r, p);


    //test function 5
    //recursive function
    int i;
    std::cout<<"≈The Fibonacci number of the integer : ";
    std::cin>>i;
    std::cout << "= " << rFib(i) << std::endl;
    //iterative function
    std::cout << "The list of the Fibonacci numbers : \n" << Fib(i) << std::endl;
    
}
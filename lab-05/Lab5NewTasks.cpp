#include<iostream>
#include <ctime>
#include <cstdlib>



// function 1
void prime_n(int N){
    bool is_prime = true;
    if (N == 0 or N==1){
        is_prime = false;
    }
    for ( int i = 2; i<= N/2 ; ++i){
        if ( N % i == 0){
            is_prime = false;
            break;
        }
    }
    if ( is_prime )
        std::cout << N << " is a prime number\n";
    else
        std::cout << N << " is not a prime number\n";
}

//function 2
void Sieve(int n){
    
    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    for (int p=2; p*p <= n; p++){
        if(prime[p] == true ){
            for (int i =p*2; i<=n; i+= p)
                prime[i] = false;
        }
    }
    for (int p=2; p<=n; p++)
       if (prime[p])
          std::cout << p << " ";
    std::cout<<std::endl;
}




int main()
{
    //test function 1
    int N;
    std::cout<<"≈ Please enter a positive integer\n";
    std::cin>>N;
    prime_n(N);



    //test function 2
    int n;
    std::cout<<"≈ Please enter a positive integer\n";
    std::cin>>n;
    std::cout << "Following are the prime numbers smaller than or equal to " << n << std::endl;
    Sieve(n);
    return 0;
}
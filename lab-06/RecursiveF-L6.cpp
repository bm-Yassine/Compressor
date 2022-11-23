#include <iostream> 

//tower of HANOI function implementation
void TOH(int n,char Sour, char Aux,char Des)
{ 
	if(n==1)
	{
		std::cout<<"Move Disk "<<n<<" from "<<Sour<<" to "<<Des<<std::endl;
		return;
	}
	
	TOH(n-1,Sour,Des,Aux);
	std::cout<<"Move Disk "<<n<<" from "<<Sour<<" to "<<Des<<std::endl;
	TOH(n-1,Aux,Sour,Des);
}//ok


void Fibonacci(int n){
    int f[n + 2] = {};//Set the whole array to 0. Remember that such array declaration does not work in any compiler except GCC.
    int i;
 
    f[0] = 0;
    f[1] = 1;
 
    for(i = 2; i <= n; i++)
    {         
       //Add the previous 2 numbers and storing them
       f[i] = f[i - 1] + f[i - 2];
	   //works but it is not recursive
    }
    std::cout<<"Fib("<<n<<")="<<f[n]<<"\n";
}


//main program
int main()
{ 
        //Hanoi Towers
	int n;
	std::cout<<"≈Enter no. of disks:";	
	std::cin>>n;
	//calling the TOH 
	TOH(n,'A','B','C');
	
	//return 0;


        //Given Fibonacci number
    int f;
    std::cout<<"≈Enter a Fibonacci number:";	
	std::cin>>f;
	//calling the Fibonacci Function 
	Fibonacci(f);
}

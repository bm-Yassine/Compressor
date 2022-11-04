
#include <iostream>

using namespace std;

int main()

{

int MyNumber;

cout<<"Enter the array size number::";

cin>>MyNumber;

int Rand[MyNumber];

for(int r= 0; r <MyNumber; r++)

Rand[r]=rand()%10;

cout<<"\nArray Elements::"<<endl;

for(int r=0; r<MyNumber ; r++)

cout<<"Number of Elements "<<r+1<<"::"<<Rand[r]<<endl;

return 0;

}









// #include <stdlib.h>
// #include <ctime>


//int main()

//{
 //   std::srand(std::time(0));
  //  int array[3];
    // get_random_in_range(-100,100);
        
//    int random_value = std::rand();

//}

//#include <random>
//#include <chrono>
//#include <limits>

//int get_random_in_range(int from = std::numeric_limits<int>::min(), int to = std::numeric_limits<int>::max())
//{
   // static std::mt19937 generator(std::chrono::system_clock::now().time_since_epoch().count());
 //   std::uniform_int_distribution<int> distribution(from, to);
 //   return distribution(generator);
//}


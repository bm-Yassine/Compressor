#include <iostream>
#include <vector>
#include <algorithm>//for std::sort and std::set_difference


//This function is local and your main program should not be able to access it
//Iy is without sense. It make some operations and return no result outside the function.
void ASvec(){
    std::vector<int> v1;
    std::vector<int> v2;
    std::sort(v1.begin(), v1.end());
    std::sort(v2.begin(), v2.end());


    std::vector<int> difference;
    std::set_difference(
        v1.begin(), v1.end(),
        v2.begin(), v2.end(),
        std::back_inserter( difference )
    );
}


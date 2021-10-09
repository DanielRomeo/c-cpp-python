#include <iostream>
#include <cmath>
#include <array>
#include <string>
#include <vector>
#include <iterator>


int main(){
#if 0
    //
    std::vector<int> vec = {1,11,111,1111};

    //traditional looping
    for(int i = 0; i < vec.size(); i++){
        std::cout << vec[i] << std::endl;
    }

    // range based looping:
    for(int value : vec)
        std::cout << value << std::endl;
    
    //iterator
#endif

#if 0
    std::vector<int> vec2 = {1,100,500};
    std::vector<int>::iterator ptr; //declare my iterator

    // diplay the elemnets using begin and end:
    std::cout << "My elements are: " << std::endl;
    for(ptr = vec2.begin(); ptr < vec2.end(); ptr++)
        std::cout << *ptr << " ";
    std::cout << std::endl;
#endif
    // I want to use the advance function to skip ahead an iterations:
    std::vector<int> vec10 = {100,200,300,400,500}; // vector
    std::vector<int>::iterator vecIt ;  // iterator
    vecIt = next(vec10.begin(), 2);
    // vecIt = vec10.begin(); // set the iterator to the first index;
    // advance(vecIt, 2); //takes the iterator and the number of adnacements you want;
    std::cout << "The new position of the iterator is : " << *vecIt << std::endl;

    // lets see what happens if i try to advance it way past the last value:
    vecIt = next(vec10.begin(), 10);
    std:cout << "The new position of the interaton is: " << * vecIt << std::endl;

    return 0;
}
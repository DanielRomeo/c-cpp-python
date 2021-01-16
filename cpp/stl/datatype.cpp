#include <iostream>
#include <cmath>
#include <array>
#include <string>
#include <vector>
#include <iterator>
#include <cstdlib>
#include <iomanip>


/*
    floating point numbers can never be unsigned
    doubles are faster than floats but use more RAM(64 vs 32 bits)
    if you are storing valuse such as 6.23 or 45.208 then just use a float...
*/

/*
    long AND long int are identical
    long long AND long long int are identical


*/


// unsigned int {0-32000} --- less memory ////
// int -> {-32000 32000} --- 
// long -> {-0000000000 000000000000}

int main(){

    // give cout the preceisons it needs to print a scientific number-> properly
    std::cout.setf(std::ios::showpoint);
    std::cout.setf(std::ios::showpos); // shows positive or negative
    std::cout.setf(std::ios::fixed);// this is the opposite of the scientific method

    uint a = 100000000000;  
    std::cout << a << std::endl;
        
    return 0;
}
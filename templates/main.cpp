#include <iostream>
#include <cmath>
#include <cstdlib>
#include <vector>
// using namespace std;

// creating a basci template(generic) function.
/*  i realised that with strings, I could call this to sort letters alphabetically. 
    since it returns the greater of two strings/chars
*/

template <typename T>
T myMax(T x, T y){
    return (x > y) ? x : y;
}

int main(){

    std::cout << "The maximum value is :"<< myMax<int>(6, 5) << std::endl;
    std::cout << "The maximum value is :"<< myMax<std::string>("x", "a") << std::endl;

    return 0;
}
#include <iostream>
#include <cmath>
#include <cstdlib>
#include "math.h"
#include <vector>
#include <iomanip>
// #include <inStream>
// #include <outStream>
// using namespace std;
#include <fstream>


int main(){


    // display stuff...
    std::cout.setf(std::ios::fixed);
    std::cout.setf(std::ios::showpoint);
    std::cout.setf(std::ios::showpos);

    // std::cout.setf(std::ios.scientific); // this make floats to be in .e format
    std::cout.precision(2); 
    
    std::cout << "Start" << std::setw(9) << 200 << "ronaldo" << std::endl;
    std::cout << 12.33665 << std::endl; 

    return 0;
}
      

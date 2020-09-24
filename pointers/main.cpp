#include <iostream>
#include <cmath>
#include <cstdlib>
#include "math.h"
#include <vector>
// #include <inStream>
// #include <outStream>
// using namespace std;
#include <fstream>


int main(){
	
    int a = 8;
	int *p = &a ;
    *p = 15;
    std::cout << p << std::endl;

    return 0;
}
      

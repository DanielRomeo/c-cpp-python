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
	
 	//    int a = 8;
 	//    int b = 10;
 	//    int *q = 16;
	// 	int *p = 15;

	int *p1, *p2, *p3, v1, v2;

	int v10 = 1000;
	int *p10 = &v10; // printing p10 gets the address; printing *p10 gets normal value;

	// copying one pointer to another
	int *pCopy = p10;


    // std::cout << p1 << " " << p2 << std::endl;
    // std::cout << *p10 << std::endl;
    std::cout << "Print the copied paointer: " << pCopy << std::endl;
    return 0;
}
      

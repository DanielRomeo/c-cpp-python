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

	int *p1, *p2, *p3, v1, v2;

	// the new operator creates a dynamic variable;
	// create an identifier to server *p1's name:
	// p1 is a nameless variable
	p1 = new int;
	std::cout << p1 <<std::endl; // returns the address

	*p1 = 100; // setting this value wont change the address of p1;
	std::cout << p1 << std::endl; // will retutn the address of p1.. of 100;

	p2 = p1; // we're basically copying the address of p1 into p2:
	std::cout << p2 << std::endl; // should return an address; same address as p1;

	//delete dynamic pointers:
	delete p1; // p1 is now a non utalized variable. // called a dangling pointer
	std::cout << *p1 << std::endl; // undefined -> results are not to be trusted. as well as * 
	std::cout << *p2 << std::endl; // also undefined as it rests on p1


	typedef int* intPtr;
	intPtr p5, p6, p7; // ive declared my pointer; // all of them are pointers
	// p5 = new intPtr;
	std::cout << p5 << " " << " " << std::endl;

    // std::cout << p1 << " " << p2 << std::endl;
    // std::cout << *p10 << std::endl;
    // std::cout << "Print the copied paointer: " << pCopy << std::endl;
    return 0;
}
      

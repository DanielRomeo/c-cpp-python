#include <iostream>
#include <cmath>
#include <cstdlib>
#include "math.h"
#include <vector>
// #include <inStream>
// #include <outStream>
// using namespace std;
#include <fstream>

// use it normally
void sort(int array[], int size){
	std::cout << "done" std::endl;
}

int main(){

	//dynamic array is an array whose size is not specified, but determined while the program runs

	// ARRAY VARIABLES 
	//a and p are the same coz::: a is apointer pointing to a variable of type int
	int a[10];
	typedef int* IntPtr;
	IntPtr p, q;
	int i, index;

	p = a;
	std::cout << p << std::endl; // returns an address of a[]
	//a can be regarded as a pointer however i cannot set a different address to a

	//----------------------------------
	// loop through the dynamic array
	// this returns an array of addresses if i dont do anything about it
	//however since im resetting a[i], it gives vales 1 to 9;
	for(i = 0; i < 10; i++)
		a[i] = i;
		// std::cout << a[i] << " ";
	std::cout << std::endl;

	p = a; //now im copying 1 to 9 into p. 

	// this also returns an array of addresses(if i didnt p = a) else returns 1 to 9
	for(i = 0; i < 10; i++)
		std::cout << p[i] << " ";
	std::cout << std::endl;


	////////////////////
	//Note that changes to the array p
	//are also changes to the array a.
	for (index = 0; index < 10; index++)
		std::cout << p[index] << " ";
	std::cout << std::endl;


	for (index = 0; index < 10; index++)
		p[index] = p[index] + 1;

	//---------------------------------------------------------------------------

	// Real DYNAMIC pointer ARRAYS:
	// the following creates a dynamic array variable with ten elemnts of type double:
	typedef double* DoublePtr;
	DoublePtr myarray;
	// let user input the value
	int array_size;
	std::cin << array_size;

	myarray = new double[array_size]; // if i ommit [10]; c++ will make enough space for one variable only

	// doesnt work coz its empty:
	for(int i = 0; i < array_size; i++){
		std::cout << myarray[i] << std::endl;
	}


	//delete a dynamic array:
	delete myarray [];

    return 0;
}
      

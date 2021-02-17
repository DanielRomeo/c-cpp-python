// **********************************************
/*
	This program does...
	Declares a dynamic array
*/
//******************************************
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string>

/* function to declare a dynamic array and returns a 
pointer to the first element of that array-
- Ill then loop through the array (with known size) in main function*/
int* declare(){
	int *p = new int[10]; // allocates contigous 10 memory locations
	*p = 20; // stores 20 to first address
	p++;
	*p = 30; // stores 30 in second address
	return p;
}

/* create a function that asks users to input values...*/
void inputValues(){
	int *p;
	int len;
	int *array = new int[len];
	std::cout << "Input length of array: " << std::endl;
	std::cin >> len;
	std::cout << "Input the values you want in the list: " << std::endl;

	for(int i = 0; i < len;i++){
		std::cin >> array[i];	
	}

	std::cout << "Your values are: " << std::endl;
	for(int i = 0; i < len; i++){
		std::cout << array[i] << " ";	
	}	

	puts("\n");
	delete p[];
}

int main(){
	inputValues();

	return 0;
}


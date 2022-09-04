#include <iostream>
#include <cmath>
#include <cstdlib>
#include "math.h"
#include <vector>
// using namespace std;


void compareAndOutput(){
	int array[25];
	int number;
	int comparer = 20;
	int incrementer = 0;

	for (int i = 0; i < 25; ++i)
	{
		std::cout << "Enter value " << i << std::endl;
		std::cin >> number;
		array[i] = number;
	}

	// loop through array:
	for (int i = 0; i < 25; ++i)
	{
		if(array[i] > comparer){
			incrementer++;
		}
	}
	

	std::cout << "Number who spends more than 20 minutes per day is " << incrementer << std::endl;


	
}

// function: this is an ordinary functio>>>>
int getnumber(){
	return 1000;
}

int main(){
	int x,y;
	x = 8;
	y= 5;

	compareAndOutput();
    return 0;
}
        

























   

#include <iostream>
#include <cmath>
#include <cstdlib>
#include "math.h"
#include <vector>

int main(){
	
	int a = 0;
	int b= 1;
	int sum;
	float p, q, r;
	float highestnumber;
	int secret, guess, absError;
	int num;
	int marks[25];
	int x = 13;
	int y = 45;
	int z = 20;
	int number;

	std::cout << "Enter a value between 0 and 12";
	std::cin >> number; 

	switch(number){
		case 10: std::cout << 'A'; break;
		case 11: std::cout << 'B'; break;
		case 12: std::cout << 'C'; break;
		default: std::cout <<" -->" <<number << std::endl;
	}


    return 0;
}
        

























   

#include <iostream>
#include <cmath>
#include <cstdlib>
#include "math.h"
#include <vector>
// using namespace std;




struct Shirt {
	int size;
	char style;
	float price;
};

/**/

void displayDataconst(Shirt & shirt1){
	std::cout << "Shirt info" << std::endl;
	std::cout << "=============" << std::endl;
	
}

const int NUM_CARS = 5;
const int NUM_SPEEDS = 6;

// put it in a function:
void getData(int noiseData[][NUM_SPEEDS]){
	int speed;

	for (int i = 0; i < NUM_CARS; ++i)
	{
		std::cout << "Enter " << NUM_SPEEDS << " noise levels for car number " << i+1 << std::endl;
		for(int j = 0; j < NUM_SPEEDS; j++){
			speed = 20 * (j+1);
			std::cout << "At " << speed << "km/h:" ;
			std::cin >> noiseData[i][j];
		}
	}
}

void showData(const int noiseData[][NUM_SPEEDS]){

	int speed;
	for(int i= 0; i<NUM_SPEEDS; i++ ){
		speed = 20* (i+1);
		std::cout << "\t" << speed << "km/h";
	}
	std::cout << std::endl;

	// display the data row by row:
	for(int i = 0; i < NUM_CARS; i++)
	{
		std::cout << "Car :" << i+1 ;
		for(int j = 0; j < NUM_SPEEDS; j++)
		{
			std::cout << "\t" << noiseData[i][j];

		}
		std::cout << std::endl;
	}
}

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


	// simple program that gets 6 noise speeds for 5 cars
	
	int noiseData[NUM_CARS][NUM_SPEEDS] = {0}; // my array:

	 //getData(noiseData);
	// std::cout << "";
	showData(noiseData);


    return 0;
}
        

























   

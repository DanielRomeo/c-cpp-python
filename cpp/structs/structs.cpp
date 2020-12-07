#include <iostream>
#include <cmath>
#include <cstdlib>
#include "math.h"
#include <vector>
#include <string>
// using namespace std;

struct  nameType{
	std::string first, last;
};

struct employeeType{
	nameType name;
	int performanceRating;
	int pId;
	std::string department;
	float salary;
};

// write a void funcion that recieves the array name and outputs the data:
// void displayNames(const nameType & nameP){
// 	for (int i = 0; i < 5; ++i)
// 	{
// 		std::cout << nameP[i].first << " " << nameP[i].last;
// 	}
// }

int main(){

	employeeType employees[100];
	employeeType newEmployee;

	// newEmployee.name.first = "dan";
	// newEmployee.name.last = "mama";
	newEmployee = employees[22]; // copy one into the other:
	employees[50].salary += 7.5; // add a value to something:

	nameType names[5];

	// for (int i = 0; i < 5; ++i)
	// {
	// 	displayNames(names[i]);
	// }

	



    return 0;
}
        

























   

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

// create a Car struct with a constructor:
struct Car{
	std::string name;
	std::string make;
	// member initialzer allows me to initialize the member variables of a class or stuct directly in the constructor declaration
	Car(std::string name, std::string make): name(name), make(make) {}; 
};

int main(){

	employeeType employees[100];
	employeeType newEmployee;

	newEmployee.name.first = "dan";
	newEmployee.name.last = "mama";
	newEmployee = employees[22]; // copy one into the other:
	employees[50].salary += 7.5; // add a value to something:

	// nameType names[5]; // I guess you could do this if you wanted, why though, no one knows.

	// create a car pointer:
	Car * mycar = new Car("Focus", "Ford"); // I just created a pointer myCar that points to my car
	std::cout << mycar->make << std::endl;	



    return 0;
}
        

























   

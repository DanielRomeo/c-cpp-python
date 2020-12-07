#include <iostream>
#include <cmath>
#include <cstdlib>
#include <vector>
#include <cstdio>
#include <fstream>


#include "main.h"
using namespace std;


Person::Person(string thename, float thesalary){
	name = thename;
	salary = thesalary;
};
Person::Person();

string Person::getname(){
	return name;
};  
void Person::setSalary(float amount){
	salary = amount;
	cout << "Salary has been set";
};

void Person::raiseSalary(int percent){
	float newamount = salary * percent/100;
	salary = newamount;
};


// friend ostream &operator <<(ostream& output, Person& person1);

#include <iostream>
#include <sstream>
/*
	This program converts a number to a string and vice versa using stringstream: <sstream>
*/
int main(){

	// how to conver a number to a string:
	int input = 45;
	std::stringstream sso;
	sso  << input;
	std::string strinput;
	sso >> strinput;

	std::cout << "the interger number: " << input << std::endl;
	std::cout << "the string number: " << strinput << std::endl;

	//convert str to int:
	std::string input2 = "45";
	std::stringstream sso2;
	sso2 << input2;
	int number;
	sso2 >> number;

	std::cout << number+330 << std::endl;

	return 0;
}
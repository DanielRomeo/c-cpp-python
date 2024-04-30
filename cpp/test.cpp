#include <iostream>
#include <string>
#include <vector>
#include <cmath>



int main(){

	// std::string mystring = "hello";
	// std::cout << mystring.size() <<std::endl;

	// check if number is finite:
	double mydouble = 5.898;
	std::cout << ( std::isfinite(mydouble) == true ? "true" : "false" )<< std::endl;


	return 0;
}

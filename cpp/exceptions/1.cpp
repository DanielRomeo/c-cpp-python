#include <iostream>
#include <cmath>
#include <array>
#include <string>
#include <vector>
#include <iterator>


int main(){

	// this is where i specify the type:
	try{
		int momsAge = 30;
		int sonsAge = 1;
		
		if(sonsAge > momsAge){
			throw 99;
		}
	}catch(int x){
		std::cout << "Son cannot be older than mom: Error-Number : " << x << std::endl;
	}

	// this is where a type is not specified:
	try{
		int grannysAge = 30;
		int grandsonAge = 111;
		
		if(grandsonAge > grannysAge){
			throw 0;
		}
	}catch(...){
		std::cout << "Grandson cannot be older than the grandmother." << std::endl;
	}	



	return 0;
}
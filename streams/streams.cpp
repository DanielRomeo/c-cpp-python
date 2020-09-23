#include <iostream>
#include <cmath>
#include <cstdlib>
#include "math.h"
#include <vector>
// #include <inStream>
// #include <outStream>
// using namespace std;
#include <fstream>


int main(){
	
	
	int theNumber;
	int first, second, third;

	std::ifstream inStream;
	std::ofstream outStream;

	inStream.open("infile.dat");
	outStream.open("outfile.txt", std::ios::app);
	if(inStream.fail()){
		std::cout << "The input file failed to open"<< std::endl;
		exit(1);
	}
	if(inStream.fail()){
		std::cout << "The output file failed to open"<< std::endl;
		exit(1);
	}

	
	inStream >> first >> second >> third;
	outStream << first + second + third << std::endl;

	inStream.close();
	outStream.close();	
	

    return 0;
}
      

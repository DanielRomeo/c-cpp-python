#include <iostream>
#include <cmath>
#include <cstdlib>
#include "math.h"
#include <vector>
// #include <inStream>
// #include <outStream>
// using namespace std;
#include <fstream>
#include <iomanip> // need this to use setw:

//fucntion reads all numbers and displays it on screen:
void makeneat(std::ifstream &messyfile, std::ofstream& neatfile, int numAfterDecimal, int fieldwidth){ // stream params must be called by reference
	
}

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
	if(outStream.fail()){
		std::cout << "The output file failed to open"<< std::endl;
		exit(1);
	}

	
	inStream >> first >> second >> third;
	outStream << first + second + third << std::endl;

	inStream.close();
	outStream.close();	

	// lets loop and display:::-----------------------------------------

	

    return 0;
}
      

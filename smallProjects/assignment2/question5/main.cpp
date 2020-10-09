#include <iostream>
#include <cmath>
#include <cstdlib>
#include "math.h"
#include <vector>
#include <fstream>
#include <string> 
#include <limits>
#include "phonecall.h"
#include <fstream>

using namespace std;

typedef std::numeric_limits< double > dbl;

int main()
{   
    PhoneCall theCall("0337698210");
	string next;
    // display the total number of calls, the 



    // open the .dat file and loop through it:
    std::ifstream inStream;
	std::ofstream outStream;
	inStream.open("MyCalls.dat");
	// outStream.open("outfile.txt", std::ios::app);
	if(inStream.fail()){
		std::cout << "The input file failed to open"<< std::endl;
		exit(1);
	}
    //loop:
	int counter = 0;
    while (inStream >> next)
	{	counter++;


		if(counter == 4){
			cout << next << endl;	
			counter = 0;
		}
		// cout << next << endl;
	
		
	}




	// inStream >> first >> second >> third;
	// outStream << first + second + third << std::endl;

	inStream.close();
	outStream.close();	

    return 0;
}
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <cmath>
#include <set>
/*Algorithm */
/*The algorithm ...*/
struct Coord{
	int x;
	int y;
};

float getGradient(std::pair<int, int> one, std::pair<int, int> two){
	float result = (one.second-two.second)/(one.first-two.first);
	return result;
}

int main(){

	float val = getGradient(std::make_pair(0,0), std::make_pair(2, 12));
	std::cout << "gradient is : "<<val << std::endl;

	std::pair<int, int> coordspair;
	std::set<std::pair<int, int>> coordsset;
	std::set<std::pair<int, int>>::iterator it = coordsset.begin();
	const int MAXRANGE = 15;

	//generate 10 numbers and create a pair  
	srand((int)time(0));
	int randomNumber;
	int randomNumber2;
	for (int i = 0; i < 10; ++i) // generate 5 coordinates
	{
		randomNumber = (rand()% MAXRANGE)+ 1;
		randomNumber2 = (rand()% MAXRANGE)+ 1;
		coordspair.first = randomNumber;
		coordspair.second = randomNumber2;
		coordsset.insert(coordspair);
	}

	std::cout << "coordinates are as follows: " << std::endl;
	for (auto a : coordsset)
	{
		std::cout << "x: "<< a.first << "  y: " << a.second << std::endl; 
	}

	// Jarvis march
	std::pair<int, int> mostSouthern(MAXRANGE,MAXRANGE);
	for (auto a : coordsset)
	{
		if(a.second < mostSouthern.second){
			mostSouthern.first = a.first;
			mostSouthern.second = a.second;
		}
	}
	std::cout << "Most southern point is : (" << mostSouthern.first << ","<< mostSouthern.second << ")" << std::endl;



	return 0;
}
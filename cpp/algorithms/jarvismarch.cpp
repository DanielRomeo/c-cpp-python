#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <cmath>
#include <set>
#include <queue>

/*Algorithm */
/*	The algorithm ...
	A bettwe way i could have written this is if i had used structs for coordinates and lists
*/
void printQue(std::queue<std::pair<int, int>> que){
	while(!que.empty()){
		std::cout << que.back().first << " " << que.back().second << std::endl;
		que.pop();
	}
}

double getGradient(std::pair<int, int> one, std::pair<int, int> two){
	double result = (one.second-two.second)/(one.first-two.first);
	return result;
}

int main(){

	// float val = getGradient(std::make_pair(0,0), std::make_pair(2, 12));
	// std::cout << "gradient is : "<<val << std::endl;

	std::queue<std::pair<int, int>> que;
	std::pair<int, int> coordspair;
	std::set<std::pair<int, int>> coordsset;
	std::set<std::pair<int, int>>::iterator it = coordsset.begin();
	const int MAXRANGE = 5;

	//generate 10 numbers and create a pair  
	srand((int)time(0));
	int randomNumber;
	int randomNumber2;
	for (int i = 0; i < 3; ++i) // generate 5 coordinates
	{
		randomNumber = (rand()% MAXRANGE)+ 1;
		randomNumber2 = (rand()% MAXRANGE)+ 1;
		coordspair.first = (rand()% MAXRANGE)+ 1;
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

	que.push(mostSouthern);
	for(auto a: coordsset){ // were looping the duration of coordset = eg 10
		
		std::pair<int, int> coordWithSmallestGradient = a;	
		
		for(auto b: coordsset){
			if( (b == que.back()) || a == que.back() ){ // 
				continue;
			}
			// if( (b.second == que.back().second)  || (a.second == que.back().second)){
			// 	continue;
			// }

			if( (getGradient(que.back(), b) ) < (getGradient(que.back(), a)) ){
				coordWithSmallestGradient = b;
			}
			// std::cout << que.back().first << " " << que.back().second  << std::endl;
			// std::cout << getGradient(que.back(), b) << std::endl;
			// continue;
		}
		que.push(coordWithSmallestGradient);
	}
	printQue(que);
	// getGradient(std::make_pair(8, 9), std::make_pair(8, 9));
	return 0;
}

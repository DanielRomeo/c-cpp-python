#include <iostream>
#include <algorithm>
#include <map>

// function thats gonna print this map out:
void printmap(){

	std::cout << "print" << std::endl;
}
// function that adds something to the map:


// function that deletes particular elements from a map:


int main(){

	// lets create an instance of this map:
	std::map<char, int> mymap;
	mymap.insert ( std::pair<char,int>('a',100) );
	mymap.insert(std::pair<char, short>('B', 1));
    mymap.insert(std::pair<char, short>('C', 2));
    mymap.insert(std::pair<char, short>('D', 3));
    mymap.insert(std::pair<char, short>('E', 4));
    mymap.insert(std::pair<char, short>('F', 5));




	return 0;
}
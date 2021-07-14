#include <iostream>
#include <algorithm>
#include <map>
/*This map data structure sorts out the items in the set by the key and it eliminates the duplicates*/


// function thats gonna print this map out:
void printmap(){

	std::cout << "print" << std::endl;
}
// function that adds something to the map:


// function that deletes particular elements from a map:


int main(){

	// lets create an instance of this map:
	std::map<char, int> mymap;
	mymap.insert(std::pair<char,int>('A',100) );
	mymap.insert(std::pair<char,int>('K', 1));
    mymap.insert(std::pair<char,int>('C', 2));
    mymap.insert(std::pair<char,int>('D', 3));
    mymap.insert(std::pair<char,int>('E', 4));
    mymap.insert(std::pair<char,int>('F', 5));

    // create an iterator:
    std::map<char , int>::iterator it;

    for(it = mymap.begin(); it != mymap.end(); ++it){
    	std::cout << (*it).first << ':' << it->second << std::endl;
    }


	return 0;
}
#include <iostream>
#include <vector>
#include <list>

/*
	research why i can use ptr < vec.end() but have to use ptr != list.end() with lists vs vectors
*/

// function that uses an iterator to print contents of a vector:
void printvector( std::vector<int> vec){
	std::vector<int>::iterator ptr;
	for(ptr = vec.begin(); ptr < vec.end(); ptr++){
		std::cout << *ptr << std::endl;
	}
}

// print list using iterators
void printlist(std::list<uint> mylist){
	std::list<uint>::iterator ptr;
	for(ptr = mylist.begin(); ptr != mylist.end(); ptr++){
		std::cout<< *ptr << std::endl;
	}	
}

int main(){

	std::vector<int> vec = {2,3,7};
	std::list<uint> mylist = {100,400,600};
	// printvector(vec);
	printlist(mylist);
	



	return 0;
}
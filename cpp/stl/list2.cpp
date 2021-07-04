#include <iostream>
#include <list>
#include <iterator>
#include <vector>



void printvector(std::vector<int> myvector){
	for(auto i : myvector){
		std::cout << "item value is : " << i << "     "; 
	}
	std::cout << std::endl;
}

void printlist(std::list<int> mylist){
	for(auto i : mylist){
		std::cout << "item value is : " << i << "     ";	
	}
}


int main(){
	
	// main function

	std::list<int> list = {2,5,1};
	std::list<int> list2 = {100,12};
	list2 = list;
	printlist(list2);

	std::vector vec1 = {1, 2, 3};
	// printvector(vec1);

	return 0;
}

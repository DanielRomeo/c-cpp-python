#include <iostream>
#include <list>
#include <iterator>
#include <vector>


// function that swaps two lists using a non member function and prints both lists' contents:
void swaplists(std::list<int> listA, std::list<int> listB){
	std::swap(listA, listB);

	std::cout << "list A: " << std::endl;
	for(auto i: listA){
		std::cout << i << ", ";
	}
	std::cout << std::endl;

	std::cout << "list B: " << std::endl;
	for(auto i: listB){
		std::cout << i << ", ";
	}
	std::cout << std::endl;
}

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
	std::list<int> list3 = {900};

	/// merge list with list 3
	list.merge(list3);
	// printlist(list);
	printlist(list3); // is now empty

	// list2 = list;
	// printlist(list2);

	// std::cout << list2.front() << std::endl;
	// std::cout << list2.back() << std::endl;


	std::vector vec1 = {1, 2, 3};
	// printvector(vec1);


	// swapping contents of two lists: and print the contents of both lists:
	// std::swap(list2, list);
	// swaplists(list, list2);

	return 0;
}

#include <iostream>
#include <list>
#include <vector>
#include <algorithm>

// function that returns true of not depending if item exists in list:
bool doesExistInList(std::list<int> &mylist){
	return (std::find(mylist.begin(), mylist.end(), 12) != mylist.end());
}

/* function that uses binary search to 
determine whether or not an element exists in the container or not */
void doesElementExistInList(std::list<int> &mylist){
	std::list<int>::iterator itr = find(mylist.begin(), mylist.end(), 1313);
	if(itr != mylist.end() ){
		std::cout << "found it ... " << *itr << std::endl;	
	}else{
		std::cout << "havent found it ..." << std::endl;
	}
}

/* VECTOR : function that gets the index of the item im looking for in the vector */
int getIndexOfElement(std::vector<int> &vec, int item){
	std::vector<int>::iterator itr;
	itr = find(vec.begin(), vec.end(), item);
	if (itr!= vec.end()){
		int index = itr - vec.begin();
		return index; 
	}
	return -1;
}

int main(){

	std::vector<int> vec = {66,33,11,22};
	std::list<int> mylist = {100,100,12,1313};
	// doesElementExistInList(mylist);
	int got = getIndexOfElement(vec, 181881);
	std::cout << got << std::endl;
	


	return 0;
}

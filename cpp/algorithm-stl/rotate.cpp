#include <iostream>
#include <vector>
#include <algorithm>
#include <list>

// function that inserts numbers 1 to 100 into the vector:
void insertintoVector(std::vector<int> &vec){
	for(int i = 0; i < 10; i++){
		vec.push_back(i);
	}
}
void printvector(std::vector<int> vec){
	std::vector<int>::iterator ptr;
	for(ptr = vec.begin(); ptr < vec.end(); ptr++){
		std::cout << *ptr << std::endl;
	}
	std::cout << std::endl;
}

void reverseVector(std::vector<int> &vec){
	std::reverse(vec.begin(), vec.end());
	std::cout << "Succefully reversed the vector" << std::endl;
}


// function that takes a vector and rotates it: takes a number of the elements and places them at the end:
void rotateVector(std::vector<int> &vec){
	std::rotate(vec.begin(), vec.begin()+3, vec.end() );
}	



void rotateList(){

}


int main(){

	// Instantiation:
	std::list<int> mylist = {1200,150,800};
	std::vector<int> myvector = {};
	std::vector<int> myvector2 = {1000, 2000};


	insertintoVector(myvector);
	printvector(myvector);
	std::swap(myvector, myvector2);
	// reverseVector(myvector);
	printvector(myvector);

	return 0;
}
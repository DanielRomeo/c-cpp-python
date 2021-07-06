#include <iostream>
#include <list>
#include <vector>
#include <algorithm>

/* function that uses binary search to 
determine whether or not an element exists in the container or not */
void doesElementExistInList(std::list<int> &mylist){
	std::list<int>::iterator itr = find(mylist.begin(), mylist.end(), 1313);
	if(itr != mylist.end() ){
		std::cout << "found it ..." << *itr << std::endl;	
	}else{
		std::cout << "havent found it ..." << std::endl;
	}

	 
}

int main(){
	std::list<int> mylist = {100,100,12,1313};
	doesElementExistInList(mylist);
	return 0;
}

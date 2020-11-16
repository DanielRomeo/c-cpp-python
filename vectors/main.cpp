#include <iostream>
#include <cmath>
#include <cstdlib>
#include "math.h"
#include <vector>
#include <cstdio>
// using namespace std;

/*
Looping through vectors without itterators; we need to keep track of the size of the vector
whereas if we use Iterators- we dont need to do that
*/
int main(){
	int j, k;

	std::vector<int> v = {1,82,9,10};

	// declare an iterator:
	std::vector<int>::iterator i;

	// loop through the vector:
	// for(j = 0; j < 4; j++ ){
	// 	std::cout << v[j] << std::endl;
	// }

	v.push_back(100);

	// accesing elements using iterators:
	for(i = v.begin(); i != v.end(); i++){
		std::cout << *i << std::endl;
	}
	
	std::cout << ""<< std::endl;

    return 0;
}
    
#include <iostream>
#include <cmath>
#include <cstdlib>
#include "math.h"
#include <vector>
#include <cstdio>
#include <algorithm>
// using namespace std;

void printVector(std::vector<int> v){
	for(x: v){
		std::cout << x << std::endl;
	}
}


int main(){
	int j, k;

	std::vector<int> v = {1,82,9,10};
	std::vector<int>::iterator i;

	printVector(v);

	std::cout << ""<< std::endl;

    return 0;
}
    
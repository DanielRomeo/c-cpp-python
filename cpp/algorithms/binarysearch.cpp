#include <iostream>
#include <algorithm>
#include <math.h>

// function that returns the pos of the value otherwise it returns -1:
int binarysearch(int array[], int sizeofarray, int searchvalue){
	int first = array[0];
	int last = array[sizeofarray];
	int middle = array[sizeofarray/2];
	int arraylength = sizeofarray;

	for(int i = 0; i < sizeofarray; ++i){
		// std::cout << array[i] << std::endl;
		if(searchvalue == middle){
			// std::cout << "middle value" << std::endl;
			return array[middle];
			return 11;
		}else if(searchvalue < middle){
			last = middle;
			arraylength = arraylength/2;
			middle = array[arraylength];
		}
		else if(searchvalue > middle){
			first = middle;
			arraylength = arraylength/2;
			middle = array[arraylength];
		}
	}
	return -1;
}

int main(){

	int myarray[] ={1,2,4,5,6,76,66,222};
	// std::sort(myarray);
	int sizeofarray = sizeof(myarray)/ sizeof(myarray[0]);

	// takes two params, the array star and the array end pos
	std::sort(myarray, myarray+sizeofarray);

	// binaray search algo:
	int num = binarysearch(myarray, sizeofarray, 222);
	std::cout << num << std::endl;

	return 0;
}
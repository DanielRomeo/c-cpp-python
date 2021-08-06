#include <iostream>
#include <algorithm>
#include <math.h>

// function that returns the pos of the value otherwise it returns -1:
int binarysearch(int array[], int sizeofarray, int searchvalue){
	int start = 0;
	int end = sizeofarray-1;
	int middle = 0;
	int iterations = 0;
	
	while(start <= end){
		iterations++;
		// std::cout<< middle << std::endl;
		middle = start+end / 2;
		std::cout << "middle :" << middle << std::endl;	
		if(searchvalue == array[middle]){
			std::cout << "itr: "<< iterations << std::endl;
			return middle;
			
		}else if(searchvalue < array[middle]){
			end = middle-1;
		}else{
			start = middle-1;
		}
	}
	
	
	return -1;
}

int main(){

	int myarray[] = {10,15,20,25,30,35,40,45,60};
	int sizeofarray = sizeof(myarray)/ sizeof(myarray[0]);

	// takes two params, the array star and the array end pos
	std::sort(myarray, myarray+sizeofarray);

	// binaray search algo:
	int num = binarysearch(myarray, sizeofarray, 15);
	std::cout << "res:" << num << std::endl;

	return 0;
}
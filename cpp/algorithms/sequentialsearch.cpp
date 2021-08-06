#include <iostream>
#include <algorithm>

int seqSearch(int array[], int n, int x){
	for(int i = 0; i < n ; i++){
		if(array[i] ==x){
			return i;
		}
	}

	return -1;
}


int main(){

	int arr[]  = {10, 320, 345,321,24,24,345};
	int val = seqSearch(arr, 7, 24);
	std::cout <<val << std::endl;

	return 0;
}
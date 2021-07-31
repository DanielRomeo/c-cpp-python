#include <iostream>
#include<algorithm>

/*This function is supposed to take an array and return the largest value using
-> RECURSION*/
// takes an array and the 
int findlargest(int arr[], int i ){
	// int ss = sizeof(arr)/sizeof(arr[0] )-1; 
	if(i >= 4 ){
		return arr[i];
	}else{
		return std::max(arr[i], findlargest(arr, i+1));
	}
	return 0;
}


int main(){
	int arr[] = {100, 800, 700, 10000};
	int * p = &arr[0];
	// std::cout << sizeof(arr)/sizeof(arr[0] ) << std::endl;
	std::cout << findlargest(arr, 0) << std::endl;

	// std::cout << std::max(100,1000) << std::endl;
	return 0;
}
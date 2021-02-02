#include <stdio.h>
//Function pointers store the block of memory of the first instruction of the function

int Add(int a, int b){
	return a+b;
}

int main(){

	/*__*/ 
	//creating a function pointer
	int c;
	int (*p)(int, int);
	p = Add; // p now stores the address of the function Add
	c = p(2,3); // executes the function
	printf("%d\n", c);

	return 0;
}
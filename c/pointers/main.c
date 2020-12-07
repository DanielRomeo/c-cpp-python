#include <stdio.h>

int main(){

	// declare a pointer:
	int* point = NULL; 
	int year;

	printf("What year is it?");
	scanf("%d", &year);

	point = &year;
	*point = 600; // dereferncing the pointer, now its value has changed

	printf("\nThe year is %d", year); // print the actual number
	printf("\n The year's address is %p", &year); // print te address of the pointer
	printf("\n The point's address is %p", &point); // this prints out the pointers address

	printf("\nHello\n");
	return 0;
}
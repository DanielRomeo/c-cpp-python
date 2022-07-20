#include <stdio.h>

int main(){

	// declare a pointer:
	// int* point = NULL; 
	// int year;

	// printf("What year is it?");
	// scanf("%d", &year);
	// point = &year;
	// *point = 600; // dereferncing the pointer, now its value has changed
	// printf("\nThe year is %d", year); // print the actual number
	// printf("\n The year's address is %p", &year); // print te address of the pointer
	// printf("\n The point's address is %p", &point); // this prints out the pointers address
	// printf("\nHello\n");

	// practice session 2:
	// int * p = NULL; //  pointer points to a null value
	// int number = 200;
	// p = &number;
	// *p = 500;
	// printf("the value in P is: %d and the address of p is: %p \n",*p, p );

	// // printing the size of an integer:
	// printf("the size of number is : %d bytes\n", sizeof(int));

	// void pointers, pointer arithmetic and pointer types:
	//size of char and size of integer?
	printf("Size of char is %d and size of integer is %d",sizeof(char), sizeof(int));



	return 0;
}
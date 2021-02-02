#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*program that lets user enter the size and the valuse of the array,
program then allocates memory and prints out the values,
Then we reallocate that memory-doubling it and storing the doubles of the values previously stored*/
int main(){

	int n;
	printf("Enter the size of the array \n");
	scanf("%d", &n);
	int *A = (int *)malloc(n*sizeof(int));
	// int *A = (int *)calloc(n, sizeof(int));// if i usede calloc
	for (int i = 0; i < n; ++i)
	{
		*(A+i) = i+2;
	}
	free(A);
	printf("Address: \tValue:\n");
	for (int i = 0; i < n; ++i)
	{
		// print the values and addresses:
		printf("%p \t%d\n", (A+i), *(A+i));
	}

	/*Reallocate the memory and store the doubles*/
	printf("\nReallocation happens now\n");

	int *B = (int *)realloc(A, 2*n*sizeof(int));
	for (int i = 0; i < n*2; ++i)
	{
		*(B+i) = i*i;
	}
	printf("Address: \tValue:\n");
	for (int i = 0; i < n*2; ++i)
	{
		// print the values and addresses:
		printf("%p \t%d\n", (B+i), *(B+i));
	}

	// deallocate memory of B
	// free(B); // first option
	int *B = (int *)realloc(B, 0); // giving it a 0 size...

	// using realloc to set new memory...
	int *F = (int *)realloc(NULL, n*sizeof(int));	


	return 0;
}
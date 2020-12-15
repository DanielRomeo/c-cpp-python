#include <stdio.h>
/*Here i learn how to pass arrays into function params*/
/*And normal functions*/
/*and call by references*/

int* addArrayPointer(int myarray[], int size){
	int *sum = NULL;
	int tempSum = 0 ;
	for (int i = 0; i < size; ++i)
	{
		tempSum += myarray[i];
	}
	sum = &tempSum;
	return sum;
}

int addArray(int myarray[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; ++i)
	{
		sum += myarray[i];
	}
	return sum;
}

int addNumbers(int a, int b){
    return a+b;
}

void changeNumbers(int *a, int *b){
	*a = 1000;
	*b = 7000;

}

void printArray(int myarray[], int size){
	for (int i = 0; i < size; ++i)
	{
		printf("%d\n", myarray[i]);
	}
}


int main(){

	/*normal variable passing*/
    // int number1, number2;
    // printf("Enter 2 numbers: \n");
    // scanf("%d", &number1);
    // scanf("%d", &number2);
    // printf("The number returned is: %d \n", addNumbers(number1,number2));

    /*lets pass an array to the print function*/


	/*lets pass  values by refernce*/
	int unsigned num1 = 10;
	int unsigned num2 = 20;
	changeNumbers(&num1, &num2);
	printf("%d %d \n", num1, num2);

	/*Add values in an array*/
	// int myarray[] = {1,100, 11, 13};
	// char mychararray[] = {'a', 'b', 'c', 'd'};
	// int length = sizeof(myarray)/sizeof(myarray[0]); // gets the size of the array using dividing size of memories
	// int mysum = addArray(myarray, length);
	// printf("%d\n", mysum);

	/*I wanna call afucntion that takes an array, adds the values and returns the address of the value*/
	int unsigned value1 = 500;
	int unsigned value2 = 900;
	int myarray[] = {1,100, 11, 13};
	int length = sizeof(myarray)/sizeof(myarray[0]);
	int *mysum = addArrayPointer(myarray, length);
	printf("value is : %d\n", *mysum);


    return 0;
}

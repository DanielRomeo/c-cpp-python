#include <stdio.h>
/*	Important to remmebr that C doesnt allow me to return an address of a local variable to the outside of a function..
	this is useful as ill see in the future...
	Since i need to retutn the address of the array-elements, I need to then declare the local variable as static before returning it 
*/

// function to print array of elemnts:
void printArray( int theArray[], int sizeOfArray){
	for (int i = 0; i < sizeOfArray; ++i)
	{	
		// try and catch incase the sizeOfArray is > than the theArrauy itself
		printf("%d\n", theArray[i]);
	}
}

// set all values in an array to a specified-number(else Zero)
// int * setToValue(int theArray[], int sizeOfArray, int value){
// 	// static int newArray[sizeOfArray];
// 	int newArray[sizeOfArray];
// 	for (int i = 0; i < sizeOfArray; ++i)
// 	{	
// 		newArray[i] = 0;
// 	}
// 	print(newArray);
// 	return newArray;
// }




int main(){

	int balance[3];
	int balance2[4] = {7, 8, 100, 13};

	// determine the size of array in BYTES:
	// int size = sizeof balance2 / sizeof balance2[0];
	// printf("%d", size);	
	// sizeOfArray(balance2);

	setToValue(balance2, 4, 0);



	// printArray(balance2, 4);
	return 0;
}
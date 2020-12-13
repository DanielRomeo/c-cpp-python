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





int main(){

	int balanceSingle[3]; // single dimension array
	int balanceDouble[2][3]= { {7, 8, 100}, {1,2, 13} }; // multii-dimension array

	// access and changin elements
	balanceSingle[3] = 100;
	balanceDouble[0][2] = 500;

	printf("%d \n", balanceSingle[3] );

	return 0;
}
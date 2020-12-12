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

	int balance[3];
	int balance2[4] = {7, 8, 100, 13};

	// get users name and displa it:
	char name[10];
	printf("Enter your name \n");
	fgets(name, 10, stdin); // this is a way of getting a strng input from a user, second param is the max length
	printf("Hello %s! \n ", name);

	// get user's number and display it:
	int age;
	printf("Enter your age: ");
	scanf("%d", &age);
	printf("Your age is: %d \n", age);

	// get and display a charector
	char charector;
	printf("Enter your char: ");
	scanf("%c", &charector);
	printf("Your char is: %c \n", charector);

	// get and display a double
	double mydouble;
	printf("Enter your double: ");
	scanf("%lf", &mydouble); // to get the value we use %lf
	printf("Your char is: %f \n", mydouble); // to display the value we use %f


	// printArray(balance2, 4);
	return 0;
}
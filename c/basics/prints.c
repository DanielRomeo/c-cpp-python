#include <stdio.h>

//function that returns a pointer:
int myfunc(){
	return 5;
}


int main(){

	printf("Hello world \t Sam \n");
	printf("Mate and hello \t sam \n");

	// the printing of decimals and floating points:
	double pi = 3.1434567;
	int newpi = 923456789.123456789;

	printf("%f \n", pi); // print it as a decimal
	printf("%6d", newpi); // prints the nums atleast 6 nums wide
	printf("Solodify my existance %.2f \n", pi);	

	return 0;
}

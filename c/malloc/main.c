#include <stdio.h>
#include <stdlib.h>

#define PI 3
#define myNumber 100

// defining macros with paramaters
#define AREA(l,b)(l*b)

int main(){
	
	#ifdef AREA
	int l=10, b=15, area;
	area = AREA(l,b);
	printf("area is : %d\n", area);
	#endif	

	#ifdef myNumber
		printf("print stuff, %d \n", myNumber);
	#endif
	
	/*program that uses malloc*/
	/*program that converts */
	printf("hello person \n");

	for(int i = 0; i < PI; i++){
		printf("number is %d\n", i);
	}
	return 0;
}

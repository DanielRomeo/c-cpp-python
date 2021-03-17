/*
	Program will generate a random number from 1 to 5
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
	time_t t;

	srand(time(&t));

	short dice = (rand() % 5) + 1;
	printf("%d", dice);

	return 0;
}
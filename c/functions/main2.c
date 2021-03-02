/*program(function) that raises 10 numbers to a power*/

#include <stdio.h>
#include <stdlib.h>

int power(int m, int n){
	int result = 1;
	for (int i = 0; i < n; ++i)
	{
		result = result * m;
	}
	return result;
}

int main (){
	for (int i = 1; i < 10; ++i)
	{
		printf("2 to power %d = %d\n",i, power(2, i));
	}
	return 0;
}
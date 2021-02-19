#include <stdio.h>
#include <stdlib.h>

int main(){
	// 10 million
	long j= 0;
	long s = 0;
	for(long i = 0; i < 10000000; i++){
		for (int p = 0; p < 10; p++)
		{
			s++;
			j++;
		}
		// j++;
		
	}
	printf("%ld\n", j);

	return 0;
}
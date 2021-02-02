#include <stdio.h>
#include <stdlib.h>

// char webpage [] =

#if 0 
int main(){
	
	/*program 1*/
	/*asks users to enter length of numbers, 
	allocates memory and then lets the user enter those numbers and then prints those numbers from the memory address*/	
	int i, n;
	printf("Enter the number of integers: ");
	scanf("%d", &n);
	int *ptr = (int *)malloc(n*sizeof(int));

	if(ptr == NULL){ // ptr should return an address otherwise...
		print("Memory not availble");
	}
	for(i = 0; i < n; i++){
		printf("%d", ptr +1); // ptr is 4 bytes, so ptr +1 =the 8th location, then the 12th then 16th... etc
	}

	return 0;
}
#endif

int main(){ //malloc, alloc and 


	return 0;
}



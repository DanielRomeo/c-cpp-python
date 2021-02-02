#include <stdio.h>
#include <stdlib.h>

#if 0
/*here we use malloc*/
int main(){ 
	//dynamic memory
	/*memory is usually stored in the stack; if i want to allocate memory in runtime,
	then its called allocating dynamic memory(heap)*/
	int a ; // goes to stack;
	int *p;
	p = (int*)malloc(sizeof(int));
	*p = 24;
	free(p); // after freeing, technically that data is non existant anymore, so i cant print it after this, will return 0
	printf("%d", *p);

	// lets store a dynamic array... of integers
	p = (int *)malloc(20*sizeof(int)); // 20 integers (20 *4bytes * 800bytes)
	
	for(int i = 0; i < 20; i++){ // loop to set values to the addresses
		*(p+i) = 30*i;
	}
	for(int i = 0; i < 20; i++){ // loop to print the values from addresses
		printf("%d \n", *(p+i) );
		//free(p+i); // frees tyhe memories after setting thye values
	}
	free(p); // frees only one value

	int n = 50;
	int *s;
	s = &n;
	*s = 99;
	printf("%p", s);
}
#endif

/*malloc, realloc, calloc; and free*/
int main(){ 

	//

	size_t sam = 4; //size_t is an unsigned int that usually holds sizes of ints
	void *p = (int *)malloc(sizeof(sam));
	
	// will initialize valuse to 0
	void *q = (int *)calloc(3, sizeof(int));

	// realloc reallocates. Give it the address and then the size  
	/*so i now want to give it the address of q...*/
	/*print address of q first and then print address of r, to see if its the same address*/
	printf("Address of Q is : %p\n", q);
	void *r = (int *)realloc(q, sizeof(int));	
	printf("Address of R is : %p\n", r);

	return 0;
}
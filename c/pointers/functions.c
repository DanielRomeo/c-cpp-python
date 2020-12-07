#include <stdio.h>
/*HERE I LEARN HOW TO USE REFERENCE PARAMS IN C; IN FUNCTIONS*/

// call a function passing a pointer:
void func2(int *a){
	*a = 900; 
}

// call a basic function
void func(){
	printf("hello world\n");
}

int main(){
	int value = 100;

	func2(&value);
	printf("referenced : %d\n", value);

	return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h> // this is for the string functions

/*C doesnt have strings, instead we use arrays of chars*/
/*scanf reads a string untill it encounters a white space*/
/*Thus we can use fgets() to read a line of text and puts() to display it*/

// function to read a string and then return it...
void readString(){
	char name[30];
	printf("Enter your name: ");
	scanf("%s", name);
	printf("Your name is %s", name);
}

// function to read a line string
void readString2(){
	char name[30];
	printf("Enter your name: ");
	// scanf("%s", name);
	fgets(name, sizeof(name), stdin);
	printf("Your name is : %s", name);
	// puts(name);
}

// function that passes a string to a function:
void displayString(char str[]){
	printf("The string printed is : %s\n", str);
}

// function takes pointer char and prints
void printPointer(char* ptr){
	size_t size = sizeof(ptr);
	printf("its size of ptr is : %zu\n", size);
	printf("value is %s\n", ptr);
}


int main(){
	//readString2();
	char c[] = "abcd";
	size_t sizeOfC = strlen(c);
	printf("size of sizeOfC is : %zu bytes\n", sizeOfC);


	//charector arrays:
	char* charPointer = "hello";
	printPointer(charPointer);

	return 0;
}
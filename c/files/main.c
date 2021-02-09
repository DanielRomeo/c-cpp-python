#include <stdio.h>
#include <stdlib.h>
 
int myfunc(void){
	printf("scerev\n");
}

// function to read contents of the file:
void readFromFile(){
	FILE *fpointer;
	fpointer = fopen("bacon.txt", "r");
	char singleLine[150];
	while(!feof(fpointer)){
		fgets(singleLine, 150, fpointer); // this gets one line and stores it in the first param
		puts(singleLine);
	}
	fclose(fpointer);
}

// function to write to a file:
void writeToFile(){
	FILE *fpointer;
	fpointer = fopen("bacon.txt", "a");
	fprintf(fpointer, "\nIm Daniel");
	fclose(fpointer);
}

int main(){
	FILE *fpointer;

	// creating a file and writing to it 
	// fpointer = fopen("bacon.txt", "w");
	// fprintf(fpointer,"I love chees\n"); // takes a file pointer, text
	// fclose(fpointer); // this will free up any memory

	
	//call read function:
	readFromFile();

	return 0;
}

#include <stdio.h>
#include <stdlib.h>
 
int myfunc(void){
	printf("scerev\n");
}

int main(){
	FILE *fpointer;

	// name of file, 
	fpointer = fopen("bacon.txt", "w");
	fprintf(fpointer,"I love chees\n"); // takes a file pointer, text
	fclose(fpointer); // this will free up any memory

	// lets read from a file...
	fpointer = fopen("bacon.txt", "r");
	char singleLine[150];
	while(!feof(fpointer)){
		fgets(singleLine, 150, fpointer); // this gets one line and stores it in the first param
		puts(singleLine);
	}

	return 0;
}

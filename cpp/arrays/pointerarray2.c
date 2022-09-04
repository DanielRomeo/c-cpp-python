#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// let me first pass an array into a function and print it in the function:
void arrayPrinter(int arr[], size_t size){

    int i;
    for(i = 0; i < size; i++){
        printf("%d\n", i);
    } 

}

int main(){
    //
    int myarr[] = {10, 200, 53};
   
    size_t mysize = sizeof(myarr)/sizeof(myarr[0]);
    // printf("The size of my array is: %zu\n", mysize);

    arrayPrinter(myarr, mysize);


    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int * function(){
    static int r[10];
    int i;
   
     srand( (unsigned)time(NULL) );
    for(i = 0; i < 10; ++i){
       
        r[i] = rand() % 10;
    }

    return r;

}

int main(){

    // lets print the array...
    int i ;
    int *p ;
    p = function();

    for(i =0; i < 10; ++i){
        printf("%d: %d\n", i, *(p+i) );

    }

    // printf("%d\n", 10090);
    return 0;
}
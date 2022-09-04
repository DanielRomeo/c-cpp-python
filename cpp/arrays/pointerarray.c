#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int * function(){
    static int r[10];
    int i;
   

    for(i = 0; i < 10; ++i){
        srand( (unsigned)time(NULL) );
        r[i] = rand() % 100;
    }

    return r;

}

int main(){

    // lets print the array...
    int i ;
    int *p ;
    p = function();

    for(i =0; i < 10; ++i){
        printf("%d: %d\n", i, *p+1 );

    }

    // printf("%d\n", 10090);
    return 0;
}
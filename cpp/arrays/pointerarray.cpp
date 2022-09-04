#include <stdio.h>
#include <time.h>

int * function(){
    static int r[10];
    int * p;
    return p;
}

int main(){
    printf("%d\n", 10090);
    return 0;
}
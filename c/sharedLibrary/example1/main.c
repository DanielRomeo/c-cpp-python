#include "stdio.h"
#include "library.h"

int main () {
    int a =23;
    int b = 44;
    int c = 0;
    
    c =  add(a,b);
    printf("the number is: %d\n", c);

    return 0;
}
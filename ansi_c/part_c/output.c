#include <stdio.h>



int main(){
    // putchar();
    putchar('x');
    putchar('\n');
    putchar('K');

    // puts(addr); outputs string and newline charector
    puts("Hello world");
    puts("hi");

    // int errcount = 0;
    // if(puts(cptr) == EOF){
    //     errcount++;
    // }

    // printf is a routine to print formatted output to the standard output:
    unsigned u = 100;
    int i = 10;
    char c = 'F';
    

    printf("%s %s", "I am a hero", "I am rich");
    printf("%c", 'k');
    puts("");
    printf("My unsigned integer is %u and my signed integer is %i , and my charector is %c , and name is: %s", u,i, c, "Daniel");

    return 0;
}
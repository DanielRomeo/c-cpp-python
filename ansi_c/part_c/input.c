#include <stdio.h>


int main(){

    // simple program to enter a char and outputs it.
    // printf("Enter a charector...\n");
    // char c = getchar();
    // printf("%c",c);

    // simple program that allows user to keep entering chars untill it recognizes end of line:
    // printf("Enter your details and add a space at the end...\n");
    // char ch;
    // while( (ch = getchar()) != '\n'){
    //     printf("Charector you have just entered is: %c\n", ch);
    // }

    /*Program that asks a user to enter their name and it outpts their name using gets()*/
    // char str[50];
    // printf("Enter your name please?\n");
    // gets(str);
    // printf("Your name is : %s\n", str);

    /*Program that uses scanf to get multiple values and prints them*/
    int n;
    printf("Enter an number: \n");
    scanf("%d", &n);
    printf("The number you entered is: %d", n);


    return 0;
}
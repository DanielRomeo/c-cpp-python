#include <stdio.h>
#include <errno.h>
#include <string.h>

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
    // int n;
    // printf("Enter an number: \n");
    // scanf("%d", &n);
    // printf("The number you entered is: %d", n);

    /*Same program as above but reads multiple numbers...*/
    // int a, b, c;
    // printf("Enter 3 numbers: \n");
    // if(scanf("%d %d %d", &a, &b, &c) !=3){
    //     printf("Not all fields were assigned...");
    //     return -1;
    // }else{
    //     printf("The values entered are: %d %d %d", a, b, c);
    // }

    /*Program that asks user for a string and then outputs the data to screen using scanf...*/
    char username[30];
    printf("Enter your username\n");
    // gets(username);
    scanf("%s", username);
    printf("The username is: %s", username);

    
    return 0;
}
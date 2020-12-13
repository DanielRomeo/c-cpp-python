#include <stdio.h>

int addNumbers(int a, int b){
    return a+b;
}


int main(){

    int number1, number2;
    printf("Enter 2 numbers: \n");
    scanf("%d", &number1);
    scanf("%d", &number2);
    printf("The number returned is: %d \n", addNumbers(number1,number2));

    return 0;
}
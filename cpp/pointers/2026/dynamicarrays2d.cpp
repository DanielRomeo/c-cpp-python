#include <iostream>

// pointers and function return values:
int* testExp(){
    int *p = NULL;
    *p = 100;
    return p;
}

// dynamic 2d arrays:


int main(){

    testExp();


    // create a  4 by 6 matrix of pointers:
    int *board[4];
    for (int i = 0; i < 4; i++)
    {
        board[i] = new int[6];
    }
    // the problem with this approach is that its fixed and its not
    // 

    // considering :
    int **board2; // declares board to be a pointer to a pointer
    // now this can sotre an address of a pointer or an array of pointers of type int

    // 10 rows and 15 cols:

    // first, create an array of 10 pointers of type int and assign the addresss of that array to board.
    int **board3;
    board3 = new int * [10];

    // p-> q->[*k, *a, *r, *s ....];
    
    // now we create the cols of board:
    for(int i =0; i < 10; i++){
        board3[i] = new int[15];
    }
    

    return 0;
}
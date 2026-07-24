#include <iostream>

void example2(){
    int num = 78;
    int *p;
    p = &num; // derefenced p = 78;

    *p = 24; // derefenced p and num = 24, 

    std::cout << num << '\n';
}

int main() {

    // declaring pointer variables:
    int x = 25;
    int *p; 

    // get memory address of x:
    p = &x; 

    // dereferencing operator:
    std::cout << *p << std::endl;

    // store value directly in the pointer:
    *p = 55;
    std::cout << *p << '\n';
    std::cout << *(&x) << '\n'; // now the memory address value has been changed...

   
    return 0;
}



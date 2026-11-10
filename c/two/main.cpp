#include <iostream>
#include "c_logic.h"

int main(){

    std::cout << "Hello from the c++ main file " << std::endl;

    // calling the c funciton from the c file:
    print_from_c();

    return 0;
}
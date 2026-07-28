// OPERATION ON POINTER VARIBALES::
#include <iostream>


int main(){

    
    // TESTING THE ASSIGNMENT...
    // int *p, *q ;
    // int a = 10;
    // int b = 400;
    // p = &a;
    // q = p;
    
    // a = a+1;
    // p = &b;

    // std::cout << (p==q) << '\n';
    // std::cout << *q << std::endl;

    // TESTING THE 

    int a = 100;
    int *p = &a;

    int b = 50;
    int *q = &b;

    int c = 49;
    int *k = &c;

    std::cout << *p << std::endl;
    std::cout << p << std::endl;

    std::cout << *q << std::endl;
    std::cout << q << std::endl;

   
    q = p;

    std::cout << "memory of q is :"<<  q << std::endl;
    std::cout << "memory of c is :" << k << std::endl;


    std::cout << (p!=q) << std::endl;

    // with increments:
    // here we are incrementing the memory addresses...
    // we're not incrementing the numbers (this doesnt increment 100.. 101..102)
    p=p+1;
    p = p +1;
    c++;
    std::cout << "memory address of p after increment is : " << *p << std::endl;




    return 0;
}

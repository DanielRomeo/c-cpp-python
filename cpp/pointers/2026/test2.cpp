#include <iostream>
#include <string>


//  pointers and classes:

int  main(){

    // std::string *str;
    // str = new std::string;
    // *str = "sunny day";
    
    std::string *str = new std::string("sunny day");
    std::cout << (*str).length() << '\n';

    // error would occur if we did this:
    //int lengthOfStr = (*str).length();

    // introduction to the :
    // Member access operator arrow ->
    int lengthOfStr = str->length();
    std::cout << "The length is : "<< lengthOfStr << std::endl;

    // initializing pointer variables:
    int *p1 = NULL;
    int *p2 = 0;

    // 
    //int delete = 100; // cant use reserved keywords...

    // using new to allocate dynamic memory!
    int *p3 = new int;
    int *q2 = new int[10];

    // delete the pointer from memory:
    delete p3; // deallocate a single dynamic variable
    delete [] q2; // to deallocat a dynamic array. 

    // dangling pointers:
    // after deleting p3, you deleted the memory address, not the
    // actual variable. the variable still exists and its pointing at something you dont know...
    // we need to set  these pointers to null , after delete.
    p3 = NULL;

    // -----------------------------------
    // POINTER OPERATIONS!!!
    // OPERATIONS ON POINTER VARIABLES:
    // -----------------------------------




    return 0;
}
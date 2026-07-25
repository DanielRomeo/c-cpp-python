#include <iostream>

// DYNAMIC ARRAYS: 
// NOTE: prerequisite: pointers and functions passing by value and passing by ref...

    // another way to declare a dynamic array!
    // int *q = new int[10];
    // q[0] = 20;

// example to get values from user and insert into the array:
void example3(){
    int *intList;
    int arraySize;

    std::cout << "Enter the array size: " << '\n';
    std::cin >> arraySize;
    std::cout << '\n';

    intList = new int[arraySize];
    
    // now we can perform any array operation here...
    // add values
    // remove values
    // delete the entire array..
    // delete [] intList;
    
}

void examplePassPointers(int* &p2, int* &p3){
    std::cout << "The value of p2 is : " << *p2 << " and the value of p3 is :"<< *p3 << std::endl;
}

int main(){

    // declare a dynamic array:
    int *p;
    p = new int[10];

    // add values to p:
    p[0] = 10;
    p[1] = 11;
    p[2] = 30;
    p[3] = 33;

    //std::cout << p[0] << std::endl;

    // initialize all the values in the array to 0:
    for(int i =0; i < 10; i++){
        p[i] = 0;
    }

    // print all values in the array:
    for (auto j = 0; j < 10; j++)
    {
        //std::cout << p[j] << '\n';
    }
    
    //example3();

    // call a function that passes pointers as args
    // both as refrence and as value params:

    // int *p2, *p3 ;
    int *p2 = new int(100);
    int *p3 = new int(200);
    int *p4 = NULL;


    // int
    examplePassPointers(p2, p3);

    // lets change the values and see what we get:
    *p2 = 5000;
    *p3 = 1000;

    examplePassPointers(p2, p3);
    


    return 0;
}
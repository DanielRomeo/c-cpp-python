#include <iostream>
#include <cmath>
#include <cstdlib>
#include "math.h"
#include <vector>
// #include <inStream>
// #include <outStream>
// using namespace std;
#include <fstream>
#include <string> 

class Person{
    protected:
    std::string name;
    int age;
    int mutable mutableVar = 0; // mutable variable can be changed inside a const fuction:


    public:
    Person(std::string names,int ages){
        std::cout << "construcor called" << std::endl;
        name = names;
        age = ages;
    }


   
    // adding a const to the getter will restrict this function from being able to set something in it:
    // only mutable vars can be changed in here:
    void printName() const{
        mutableVar = 100;
        std::cout << "Name is " << name << std::endl;
    }

    
};


int main(){
	
  
    Person Daniel("daniel", 15);
    Daniel.printName();

    return 0;
}
      

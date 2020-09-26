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
    public:
    std::string name;
    int age;


    Person(std::string name,int age){
        std::cout << "construcor called" << std::endl;
        name = name;
        age = age;
    }

    void printName(){
        std::cout << "Name is " << name << std::endl;
    }

    
};

int main(){
	
  
    Person Daniel("daniel", 15);
    Daniel.printName();

    return 0;
}
      

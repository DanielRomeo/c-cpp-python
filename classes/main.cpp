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


    Person(std::string names,int ages){
        std::cout << "construcor called" << std::endl;
        name = names;
        age = ages;
    }


    public:
    void printName(){
        std::cout << "Name is " << name << std::endl;
    }

    
};

class Blackman: public Person{
    
}

int main(){
	
  
    Person Daniel("daniel", 15);
    Daniel.printName();

    return 0;
}
      

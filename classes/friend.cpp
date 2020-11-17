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
    private:
    std::string name;
    int age;

    public:
    Person(std::string names,int ages){
        std::cout << "construcor called" << std::endl;
        name = names;
        age = ages;
    }
    Person();

    friend std::string changeName(Person &person1, std::string newname);

    void printName(){
        std::cout << "Name is " << name << std::endl;
    }
};

//This doesnt work buddy
std::string changeName(Person &person1, std::string newname ){
    person1.name = "frank";
}

int main(){

    Person Daniel("daniel", 20);

    changeName(Daniel, "jack");
    Daniel.printName();

    return 0;
}
    
// this is the function has access to the private properties of the friend class,
// it has access to the properties of whats passed on to it.
std::string changeName(Person person1){
    return person1.name;
}
#include "person.h"

#include <iostream>
#include <string>

// implementation

Person::Person(std::string _name, int _age){
    name = _name;
    age = _age;
}

void Person::GetPersonDetails(){
    std::cout << "YOur name is " << name << "and your age is " << age << std::endl; 
}

void Person::SetNewName(std::string newName){
    name = newName;
}

#include "person.h"

#include <iostream>
#include <string>

// implementation

Person::Person(std::string & name, int & dateOfBirth){
    this->name = name;
    this->date0fBirth = date0fBirth;
}

// accessors:
// void Person::GetPersonDetails(){
//     std::cout << "YOur name is " << name << "and your age is " << age << std::endl; 
// }


// mutators:
void Person::SetName(std::string name){
    this->name = name;
}

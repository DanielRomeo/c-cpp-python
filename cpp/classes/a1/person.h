#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
#include "dateofbirth.h"

// declaration

class Person{

public:
    // constructors:
    Person(std::string& name, int & date0fBirth); 
    Person();
    // void GetPersonDetails();

    // mutators:
    // void SetName(std::string name);

private:
    std::string name;
    int age;
    DOB date0fBirth;
    
};

#endif
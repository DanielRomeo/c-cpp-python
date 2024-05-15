#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

// declaration

class Person{

public:
    Person(std::string _name, int _age); // constructor
    void GetPersonDetails();
    void SetNewName(std::string newName);

private:
    std::string name;
    int age;
};

#endif
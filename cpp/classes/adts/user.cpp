#include <iostream>
#include <cmath>
#include <cstdlib>
#include "math.h"
#include <vector>
#include <cstdio>
#include "user.h"

    User::User(std::string name, int age){
        this->name = name;
        this->age = age;
    }
    User::User() : name(0), age(0) {
        // name = "";
        // age = 0;
    }

    void User::setDetails(std::string name, int age){
        name = name;
        age = age;
    }   

    void User::getDetails(){
        std::cout << "Name is "<< this->name << " and age is "<< this->age << std::endl;
    }

    std::ostream & operator << (std::ostream& output, User &user){
        output << user.name << std::endl;
        return output;
    }
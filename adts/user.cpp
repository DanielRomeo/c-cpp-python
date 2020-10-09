#include <iostream>
#include <cmath>
#include <cstdlib>
#include "math.h"
#include <vector>
#include <cstdio>
#include "user.h"
using namespace std;



    User::User(string name, int age){
        this->name = name;
        this->age = age;
    }
    User::User() : name(0), age(0) {
        // name = "";
        // age = 0;
    }

    void User::setDetails(string name, int age){
        name = name;
        age = age;
    }   

    void User::getDetails(){
        cout << "Name is "<< this->name << " and age is "<< this->age << endl;
    }

    ostream & operator << (ostream& output, User &user){
        output << user.name << endl;
        return output;
    }
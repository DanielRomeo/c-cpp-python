#ifndef USER_H
#define USER_H

#include <iostream>
#include <cctype>
#include <cstdlib>
#include <string>
using namespace std;


class User{
    private:
        string name;
        int age;

    public:
        User(string name, int age);
        User( );

        void setDetails(string name, int age);  
        void getDetails();
        friend ostream &operator <<(ostream& output, User& user);
};

#endif
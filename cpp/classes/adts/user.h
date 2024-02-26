#ifndef USER_H
#define USER_H

#include <iostream>
#include <cctype>
#include <cstdlib>
#include <string>

class User{
    private:
        std::string name;
        int age;

    public:
        User(std::string name, int age);
        User( );

        void setDetails(std::string name, int age);  
        void getDetails();
        friend std::ostream &operator <<(std::ostream& output, User& user);
};

#endif
#include <iostream>
#include <cmath>
#include <cstdlib>
#include "math.h"
#include <vector>
#include <cctype>
#include <string>
using namespace std;

class Person{
    
    string name;
    int age; 
    
    public:
    Person(){
        name = "noname";
        age = 0;
    }    

    void getAge(){
        cout << age << endl;
    };

    friend ostream &operator << (ostream & output , Person &p);
    friend istream &operator >> (istream & input , Person &p);
};

ostream &operator << (ostream & output , Person &p){
    output  << "Your name is : " << p.name << " and age is : " << p.age  << endl;
    return output;
};

istream &operator >> (istream & input , Person &p){
    input >> p.name >> p.age ;
    return input;
};

int main(){
    cout << "Enter your name and age" << endl;
    Person Daniel;
    
    cin >> Daniel;
    cout << Daniel;
    // Daniel.getAge();

    return 0;
}


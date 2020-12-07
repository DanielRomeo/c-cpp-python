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

    void setAge(int value){
        age = value;
    }
    int getAge(){
        return age;
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

struct WindInfo{
    float velocity;
    char direction = 'v';
};

int main(){
    Person Sam[5];
    int val;

    cout << "Fill in Sam 5 times" << endl;
    for(int i = 0; i < 5; i++){
        cin >> val;
        Sam[i].setAge(val);
    }

    // cout << "Data :" << endl;
    
    //get the ages of Sam[i]
    for(int i = 0; i < 5; i++){
        cout << "age of sam is "<< i << " "<< Sam[i].getAge() << endl;
    }
    return 0;
}


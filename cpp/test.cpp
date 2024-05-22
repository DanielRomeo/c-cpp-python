#include <iostream>
#include <stack>

class Car{

};

class Person{
public:
    Person(std::string name, int age){
        this->name = name;
        this->age = age;
    }

    // copy constructor:
    // if you do not write this yourself, the compiler automatically will
    Person(Person &person){
        this->name = person.name;
        this->age = person.age;
    };

    void getName(){
        std::cout << "The user name is :" << this->name << std::endl;
    }
private:
    std::string name;
    int age;

};

int main() {

    Person dan("dan", 12);
    Person sam("sam", 20);
    Person kim(sam);
    kim.getName();



    
    return 0;
}

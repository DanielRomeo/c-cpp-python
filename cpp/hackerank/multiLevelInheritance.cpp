#include <iostream>

class Triangle{
    public :
    virtual void display(){
        std::cout << "I am a triangle"<< std::endl;
    }   
};

class Isosceles: public Triangle{
    public :
    virtual void display()override{
        std::cout << "I am an isosceles triangle"<< std::endl;
    }   
};

class Equilateral: public Isosceles{
    public :
    void display()override{
        std::cout << "I am an equilateral triangle"<< std::endl;
    } 
};

int main(){

    
    Equilateral eq;
    eq.display();
    eq.Isosceles::display();
    eq.Triangle::display();


    return 0;
}
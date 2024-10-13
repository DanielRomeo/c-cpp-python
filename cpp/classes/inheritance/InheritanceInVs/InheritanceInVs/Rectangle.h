#pragma once
#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"
#include <iostream>

// member access specifier here is private, protected, public:
class Rectangle: public Shape {
public:
    Rectangle(): height(0), width(0){} // default constructor
    Rectangle(double h, double w): height(h), width(w) {}

    void printVariable() {
        std::cout << theVariable() << std::endl;
    }

    void print() {
        std::cout << "Height is : " << height << " ,width is : " << width ;
    }

    // setDimention mutator:
    void setDimention(double h, double w) {
        height = h;
        width = w;
    }
   
private:
    double height;
    double width;
};

#endif

#pragma once
#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"
#include <iostream>

// member access specifier here is private, protected, public:
class Rectangle: public Shape {
public:
    Rectangle(){
    
    }

    void print() {
        std::cout << someVariable << std::endl;
    }
};

#endif

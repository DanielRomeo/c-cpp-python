#pragma once

#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>

class Shape {
public:
    Shape() : someVariable(200) {}

    void someFunction() {
        std::cout << "This is a function in ClassName" << std::endl;
    }
public:
    int someVariable;
};

#endif
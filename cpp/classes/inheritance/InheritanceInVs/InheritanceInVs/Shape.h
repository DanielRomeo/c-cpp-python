#pragma once

#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>

class Shape {
public:
    Shape() : someVariable(4000) {}

    void someFunction() {
        std::cout << "This is a function in ClassName" << std::endl;
    }

    int theVariable() {
        return someVariable;
    }

private:
    int someVariable;
};

#endif
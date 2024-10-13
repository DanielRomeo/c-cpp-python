#pragma once
#ifndef BOX_H
#define BOX_H

#include "Rectangle.h"
#include <iostream>

class Box : public Rectangle {
public:
    Box(): length(0) {}
    Box(double l) : length(l) {}
    Box(double w, double h, double l) : length(0), Rectangle(w, h) {
        length = l;
    }

    void print() {
        Rectangle::print();
        std::cout << " ,length is : " << length << std::endl;
    }

    void setDimention(double h, double w, double l) {
        Rectangle::setDimention(h, w);
        if (l >= 0)
            length = l;
        else
            length = 0;
    }

   
private:
    double length;
};

#endif

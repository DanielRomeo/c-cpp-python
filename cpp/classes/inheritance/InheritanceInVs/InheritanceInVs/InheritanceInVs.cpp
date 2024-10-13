#include "Shape.h"
#include "Rectangle.h"
#include "Box.h"

#include <iostream>

int main()
{
    Shape myShape;


    Rectangle myRect;

    Box myBox(3,2,1);
    //myBox.setDimention(2,6, 8);
    myBox.print();

}

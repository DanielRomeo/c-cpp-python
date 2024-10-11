#include "Shape.h"
#include "Rectangle.h"

#include <iostream>

int main()
{
    Shape myShape;
    myShape.someFunction();
    std::cout << myShape.someVariable << std::endl;


    Rectangle myRect;
    std::cout << myRect.someVariable << std::endl;
    //myRect.print();


}

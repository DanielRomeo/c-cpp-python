#include <iostream>

class Rectangle{

public:
    virtual void display(){
        std::cout << width << " " << height << std::endl; 
    }

protected:
    int width;
    int height;
};

class RectangleArea : public Rectangle{
public:
    void read_input(){
        std::cin >> width >> height;
    } 

    void display() override {
        std::cout << width*height << std::endl; 
    }


};

int main(){
 
    RectangleArea rectA;
    rectA.read_input();
    rectA.Rectangle::display();
    rectA.display();

    return 0;
}
#include <iostream>

/*a class that has pure virtual functions , is called an abstract class
An abstract class may also have non virtual functions and a constructor
, though those have to have definitions.
We cannot create objects from virtual classes*/

class Shape{
protected:
	Shape(){
		size = 100;
	}
	virtual void draw(int sizeOfDrawing)= 0;
	int getSize(){
		return size;
	}

private:
	int size;
};


class Rectangle: public Shape{
public:
	void draw(int sizeOfDrawing){
		std::cout << "drew" << std::endl;
	}
private:
};



int main(){
	Rectangle r ;
	r.draw(120);

	return 0;
}
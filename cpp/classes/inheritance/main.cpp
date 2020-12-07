#include <iostream>
#include <string>
// #include <algorithm>
#include <vector>

class Car{
private:
	std::string color;
	std::string seatType;

public:
	Car(std::string colors, std::string seatTypes) : color(colors), seatType(seatTypes){}  
	Car(){}

	void getColor(){
		std::cout << color << " " << seatType << std::endl;
	}
};



int main(){

	Car Bmw("green", "leather");
	Bmw.getColor();

	return 0;
};
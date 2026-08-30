#include <iostream>
#include <string>

// create a Vehicle class:
class Vehicle{
public:
    Vehicle(std::string name, int year){

    };

    void setName(std::string newName){
        name = newName;
    };
    std::string getName() const{
        return name;
    };

private:
    std::string name;
    int year;

};

int main()
{

    Vehicle Ford = Vehicle("FordfOCUS", 2020);
    Ford.setName("Ford fiesta");

    
    std::string nameOfCar;
    nameOfCar = Ford.getName();
    std::cout << nameOfCar << std::endl;

    return 0;
}







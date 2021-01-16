#include <iostream>
#include <cmath>
#include <array>
#include <string>
#include <vector>
#include <iterator>
#include <functional>
#include <set>
#include <string>

/*
Set
    A set doesnt have duplicate values... 
    its iplemented using a red-black tree
    by default-> sorted by ascending order
    -> add additional template <std::greater<int>> to sort it descending order
*/

class Car{
    public:
        std::string name;
    
        Car(std::string thename = "volvo"){
            name = thename;
        }   

    // smaller than operator
    bool operator < (const Car& car ) const {
        return name < car.name;
    }

    // greater than operato:
    bool operator > (const Car& car ) const {
        return name > car.name;
    }
};

int main(){

    Car volvo("kim");

    std::set<int, std::greater<int> > numberset = {1,1,1,2,77,88,100};
    std::set<Car, std::greater<Car>> mycarset = { {"bmw"}, {"ferrari"}, volvo };

    // insert an object into the set:
    mycarset.insert({"fred"});

    for(auto e: mycarset){
        std::cout << e.name << std::endl;
    }
        
    return 0;
}
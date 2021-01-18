#include <iostream>
#include <cmath>
#include <array>
#include <string>
#include <vector>
#include <iterator>
#include <functional>
#include <set>
#include <string>
#include <variant>

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

#if 0
    Car volvo("kim");
    std::set<int, std::greater<int> > numberset = {1,1,1,2,77,88,100};
    std::set<Car, std::greater<Car>> mycarset = { {"bmw"}, {"ferrari"}, volvo };

    // insert an object into the set:
    mycarset.insert({"fred"});

    for(auto e: mycarset){
        std::cout << e.name << std::endl;
    }
#endif

    {
        /*After a lot of fighting with the compiler;
        I have decided that I will step aside and go properly absirve variants... Then ill come back and tackle 
        trying to loop through a set of variant*/

        // create a set to store objects of different types
        std::set<uint> set1= {1, 4};
        std::set<uint> setD= {8};
        std::set<uint>::iterator it0;
        std::set< std::variant<uint, std::set<uint>, std::string >> set2 = { "sam", "tom"};
        std::set<std::variant<uint, std::set<uint>, std::string >>::iterator itr;

        // for (it0 = set1.begin();it0 != set1.end(); ++it0){
            // if(auto value = std::get_if<std::string>(*itr)){// if its a string
            //     std::string& v = *value;
            // }
            // std::cout << *it0 << ",";
            // uint names = *it0;
            // auto* value = std::get_if<uint>(names);
        // }




        // std::cout << set2.size();
        // for (int i = 0; i < set2.size(); ++i)
        // {
            // std::cout << set2[1].data() << " " ;
        //}
    
    }
    return 0;
}
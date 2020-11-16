#include <iostream>
#include <cmath>
#include <cstdlib>
#include <vector>
#include <string>
// using namespace std;

// creating a basci template(generic) function.
/*  i realised that with strings, I could call this to sort letters alphabetically. 
    since it returns the greater of two strings/chars
*/

//classs templates:
template<typename T>
class Myclass{
	private:
	T arr [2];
	
	public:
	Myclass(T value1, T value2){
		arr[0] = value1;
		arr[1] = value2;
	}
};

template <typename T>
T myMax(T x, T y){
    return (x > y) ? x : y;
}

template <typename F, typename G>
void myData(F value, G value2){
	std::cout << value << " and " << value2 << std::endl;
}

int main(){

    std::cout << "The maximum value is :"<< myMax<int>(6, 5) << std::endl;
    std::cout << "The maximum value is :"<< myMax<std::string>("x", "a") << std::endl;

    myData<std::string, int>("danny", 5);


    // instatiate the class:
    Myclass<std::string> Daniel("Woza", "wafa");

    return 0;
}
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <vector>
#include <string>
// using namespace std;


//class templates:
template<class T>
class Myclass{
	private:
	T a, b;
	
	public:
	Myclass(T value1, T value2){
		a = value1;
		b = value2;
	}
	T getMax();
};

//member function:
template<class T>
T Myclass<T>::getMax(){
	T number = (a > b) ? a : b;
	return number;
}

int main(){

	// call my function and get the results:
	Myclass<int> Daniel(5, 9);

	std::cout << Daniel.getMax() << std::endl; 

    return 0;
}
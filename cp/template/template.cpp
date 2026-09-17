#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;


// print contents of a vector:
template< typename T>
void print(std::vector<T> vec) {
	for (size_t i = 0; i < vec.size(); i++)
	{
		std::cout << vec[i] << '\n';
	}
}

int main() {


	print(std::vector<string>{"hello"});

}

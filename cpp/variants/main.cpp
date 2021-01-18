#include <iostream>
#include <variant>
#include <optional>
#include <string>

int main(){
	
	{
		#if 0
		/**/
		std::variant<std::string, int> data;

		//print the sizes of data structures : in bytes...
		std::cout << sizeof(int) << '\n';	
		std::cout << sizeof(std::string) << '\n';	

		std::string s = "aaaaaaaaaaaaaaaaaaaa";
		std::cout << sizeof(s) << '\n';

		std::cout << sizeof(data) << '\n';
		#endif	
	}

	{
		/*	Declare a variant variable and print it out: */
		std::variant<std::string, uint> data;
		data = "John Simons";
		// data = 100;
		std::cout << std::get<std::string>(data) << '\n';
		std::cout << "The data type is index: " << data.index() << '\n'; // variable.index() gives me the datatype

	}
			

	return 0;
}

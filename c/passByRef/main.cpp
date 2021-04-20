#include <iostream>
#include <string>

class Cat{
private:
	int num = 100;
public:

	void speak() const{ 
		std::cout<< "meoq" << num<< std::endl;
	}
	void whisper(){

		std::cout<< "yrs"<< std::endl;
	}
};

void func(std::string  &surname ){
	std::string name = "daniel";
	surname = "adams";
	std::cout << surname <<std::endl;
}


int main(){
	
	Cat sam;
	const Cat frank;
	sam.speak();
	// frank.whisper();// will return error coz frank is a constant object calling a non constant function

	/**/	
	std::string surname = "mamph"; 
	func(surname);

	std::cout << surname << std::endl;
	return 0;
}
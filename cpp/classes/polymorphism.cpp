#include <iostream>


class Man{
public:
	Man(){

	}

	void talk(){
		std::cout << "yeah" << std::endl;
	}
protected:
	short int legs = 2;
};



class Female: public Man{
public:
	void talk(){
		std::cout << "scream!" << std::endl;
	}
	void getLegsNum(){
		std::cout << legs << std::endl;
	}

};


int main(){

	Female jackie;
	jackie.talk();
	return 0;
}
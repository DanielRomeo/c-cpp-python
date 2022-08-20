#include <iostream>
#include <string>



int main(){
	
	for(int i = 0; i < 1000000; i++){
		i *= 3000;
		i+= 2000-i;
		std::cout << i << std::endl;
	}
		
	return 0;
}

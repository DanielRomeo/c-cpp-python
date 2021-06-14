#include <iostream>
#include <cstdlib>
/**/
/* we use these arrow functions to derefernect a pointer variable*/

// struct Node
// {
// 	int data;
// 	Node* link = NULL;
// };

// Node* HeadNode; // this is the head node


// template<class Type>
// Type linkedListType<Type>:: max();


class Person{
public:
	Person(int age_ ){
		age = age_;
	}
	void getAge(){
		std::cout << age << std::endl;		
	};
	friend bool operator >(Person &person1, Person &person2);
private:
	int age;
};

// void Person::getAge(){
// 	std::cout << "sam" << std::endl; 
// }


int main(){
	
	Person daniel(2);
	Person sam(35);
	daniel.getAge();
	sam.getAge();

	if(daniel > sam){
		std::cout << "true" << std::endl;
	}else if(sam > daniel  ){
		std::cout << "false" << std::endl;
	}

	return 0;
} 

bool operator >(Person &person1, Person &person2){
	if(person1.age > person2.age){
        return true;
    }else{
        return false;
    }
}


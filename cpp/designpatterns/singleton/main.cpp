#include <iostream>
using namespace std;

/*
Singleton pattern:
The singleton pattern restricts the instantiation of a class - to a single object  
Its excellent for coordination the usage of shared resource- such as a db connection or logging or a thread pool.

We ensure single instatiation.

*/


// We need to ensure that the class cannot be instantiated outside the singleton class itself.
class Singleton{

private:

public:
   static Singleton& get_instance(){
    
   }
    
};

int main(){
    
    return 0;
}
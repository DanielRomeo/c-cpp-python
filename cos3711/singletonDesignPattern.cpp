#include <iostream>
using namespace std;

class Singleton{
private: 
    Singleton() = default;
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;

public:   
    static Singleton& get_instance(){
        static Singleton instance;
        return instance;
    }

    


};

int main(){
    //

    return 0;
}

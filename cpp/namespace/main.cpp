#include <iostream>
#include <cmath>
#include <cstdlib>
#include "math.h"
#include <vector>
#include <cstdio>

namespace savich1{
    void greetings(){
        std::cout << "hello world savich 1" << std::endl;
    };

    void cout(){
        std::cout << "called cout as a different name" << std::endl;
    }
}

namespace savich2{
    void greetings(){
        std::cout << "hello world savich 2" << std::endl;
    };
}

void bigGreetings(){
    std::cout << "hello big" << std::endl;
};

int main(){

    {   /*say i wanted to use it without declaring it beacuse i wanna use it \ not alot*/
        /*just like std:: */
        savich1::greetings();


        // using  savich1::greetings;
        // greetings();
    }

    {
        using namespace savich2;
        greetings();
    }

    bigGreetings();


    // so now, i can have multiple namespaces,  and have the same function name in each:
    // now i can call cout from std, and cout from savich1
    savich1::cout();
    savich1::cout();
    
    
    return 0;
}
    

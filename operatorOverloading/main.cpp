#include <iostream>
#include <cmath>
#include <cstdlib>
#include "math.h"
#include <vector>

#include <iostream>
#include <cstdlib>
#include <cctype>
// using namespace std;
using namespace std;

class Money
{

    private:
    int dollar, cent;
    // long allCents;

    public:
    Money(int dollar){
        dollar = dollar;
    };
    // Money(float dollar){
    //     dollar = dollar;
    // };

    // Money(){
    //     dollar = 0;
    // };
    friend Money operator +(const Money amount1, const Money amount2);
    //Precondition: amount1 and amount2 have been given values.
    //Returns the sum of the values of amount1 and amount2.

    //lets add a money friend function that adds:
    // it returns a type Money:
    //friend Money add(const Money& amount1, const Money& amount2);

    // these allow me to return steam of Moneytype:
    // void input(istream& ins);
    void output(ostream& outs) const{
        // printf(dollar);
        outs << dollar << endl;
    };
};


int main(){
    
    //implement:
    Money cash(2), interest(3), total(0);
    total = cash + interest;
    cout << "Output is : ";
    total.output(cout);
    return 0;
}
        
Money operator +(const Money amount1, const Money amount2){
    Money temp(0);
    temp.dollar = amount1.dollar + amount2.dollar;
    return temp; 
    
    //return amount1.dollar + amount2.cent;
}

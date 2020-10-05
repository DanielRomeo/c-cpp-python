#include <iostream>
#include <cmath>
#include <cstdlib>
#include "math.h"
#include <vector>
#include <cctype>


using namespace std;
class Money
{
    public:
    friend Money operator +(const Money& amount1, const Money& amount2);
    //Precondition: amount1 and amount2 have been given values.
    //Returns the sum of the values of amount1 and amount2.

    Money(long dollars, int cents){
        allCents = dollars;
    }
    Money(long dollars);
    Money();
    double getValue( ) const;
    //void input(istream& ins);
    //void output(ostream& outs) const;

    void input(istream& ins){
        ins >> allCents;
    };
    void output(ostream& outs) const{
        // printf(dollar);
        outs << allCents << endl;
    };

    private:
    long allCents;
};



int main(){
    // Money cost(1, 50);
    Money cost(1, 50), tax(0, 15), total;
    total = cost + tax;
    cout << "cost = ";
    cost.output(cout);
    cout << endl;
    cout << "tax = ";
    tax.output(cout);
    cout << endl;
    cout << "total bill = ";
    total.output(cout);
    cout << endl;
    return 0;
}

Money operator +(const Money& amount1, const Money& amount2)
{
    Money temp;
    temp.allCents = amount1.allCents + amount2.allCents;
    return temp;
}


// bool operator ==(const Money& amount1, const Money& amount2)
// {
//     return (amount1.allCents == amount2.allCents);
// }
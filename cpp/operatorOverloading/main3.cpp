#include <iostream>
#include <cmath>
#include <cstdlib>
// #include "math.h"
#include <vector>
#include <cstdlib>
#include <cctype>


class Money
{
    private:
    int dollar, cent;
   
    public:
    Money(int dollars){
        dollar = dollars;
    };
    friend bool operator ==(const Money& amount1, const Money& amount2);
    friend Money operator +(const Money& amount1, const Money& amount2);
    friend Money operator -(const Money & amount1, const Money& amount2);
    friend std::ostream& operator <<(std::ostream& outs, const Money& amount);
    friend std::istream& operator >>(std::istream& ins, const Money& amount);

    int getDollar(){
        return dollar;
    }

    void output(std::ostream& outs){
        int dollar;
        outs << dollar;
    }
    
};

void output(std::ostream& outs){
        int dollar;
        outs << dollar;
    }

int main(){
    Money cash(2), interest(3), total(0);
    Money sam(1);
    Money sam2(3);
    Money sam0(0);
    Money newsam(0);
    std::string val;



    // testing the + and - operator:
    total = cash + interest;
    std::cout << "Output is : " << std::endl;
    total.output(std::cout); // returns weid number

    // testing the smaller than operator:
    sam0 = sam - sam2;
    std::cout << "Output is : "<< sam0.getDollar() << std::endl; // success

    // testing << operator
    std::cout << interest << " is the interest " << interest << std::endl; // success

    // testing the >> operator
    std::cin >> newsam;//
    std::cout << "Newsam.dollar is now: " << newsam << std::endl;

    // testing the == operator:
    if(sam == sam2){
        val = "true";
    }else{
        val = "false";
    }

    std::cout <<"zz: "<< val << std::endl;
    return 0;
}

// definitions
Money operator +(const Money& amount1, const Money& amount2){
    Money temp(0);
    temp.dollar = amount1.dollar + amount2.dollar;
    return temp; 
    //return amount1.dollar + amount2.cent;
}

Money operator -(const Money& amount1, const Money& amount2){
    Money temp(0);
    temp.dollar = amount1.dollar - amount2.dollar;
    return temp;   
}

// << >> operators
std::ostream& operator <<(std::ostream& outs, const Money& amount){
    outs << amount.dollar;
    return outs;
};
std::istream& operator >>(std::istream& ins, const Money& amount){
    ins >> amount.dollar;
    return ins;
};

bool operator ==(const Money& amount1, const Money& amount2){
    if(amount1.dollar == amount2.dollar){
        return true;
    }else{
        return false;
    }
}


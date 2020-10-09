#include <iostream>
#include <cmath>
#include <cstdlib>
#include "math.h"
#include <vector>
#include <fstream>
#include <string> 
#include <limits>
#include "phonecall.h"


    // an overloaded constructor that sets the values to 0;
    PhoneCall::PhoneCall(string number){
        number = number;
        this->rate = 0;
        this->length = 0;
    };
    // a constructor that takes in no parameters:
    PhoneCall::PhoneCall() : number(""), rate(0), length(0) {
        number = "";
        rate = 0;
        length = 0;
    }

    PhoneCall::~PhoneCall(){ // destructor
        // does no action
    }

    // accessor functions:
    string PhoneCall::getNumber(){
        return number;
    };
    float PhoneCall::getRate(){
        return rate;
    };
    int PhoneCall::getLength(){
        return length;
    };

    //member functions:
    float calcCharge(){
        return 0;
    };

    //friend functions
    bool operator==(const PhoneCall & call1, const PhoneCall &call2){

        // compare if the calls have been placed on the same number or not:
        if(call1.number == call2.number){
            return true;
        }else{
            return false;
        }
    }

    istream & operator >> (istream& input, PhoneCall &call){
        input >> call;
        return input;
    }

    ostream & operator << (ostream& output, PhoneCall &call){
        output << call << endl;
        return output;
    }
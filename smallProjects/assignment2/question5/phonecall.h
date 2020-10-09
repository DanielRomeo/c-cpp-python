#ifndef PHONECALL_H
#define PHONECALL_H


#include <iostream>
#include <cmath>
#include <cstdlib>
#include "math.h"
#include <vector>
#include <fstream>
#include <string> 
#include <limits>
using namespace std;



class PhoneCall{
    private:
        string number;
        int length;
        float rate;

    public:
        PhoneCall(string number);
        PhoneCall();
        ~PhoneCall();

        // accessor functions:
        string getNumber();
        float getRate();
        int getLength();

        // member functions
        float calcCharge();

        // friend functions:
        friend bool operator==(const PhoneCall & call1, const PhoneCall &call2);
        friend  istream & operator >> (istream& input, PhoneCall &call);
        friend  ostream & operator << (ostream& input, PhoneCall &call);


        // void setDetails(string name, int age);  
        // void getDetails();
        // friend ostream &operator <<(ostream& output, User& user);
};

#endif
#include <iostream>
#include <cmath>
#include <cstdlib>
#include "math.h"
#include <vector>
// #include <inStream>
// #include <outStream>
// using namespace std;
#include <fstream>
#include <string> 
#include <limits>
using namespace std;

typedef std::numeric_limits< double > dbl;

class Car{
    private:
    double price;
    string type;
    bool discounts;
    int discountValue = 13; //13% discount  
    double newPrice = 0;
    double reducedValue = 0;

    public:
    Car(){
        price = price;
        type = type;
        discounts = discounts;
    };
    Car(double price, string type, bool discounts){
        price = price;
        type = type;
        discounts = discounts;        
    }

    void calculateNewPrice(){
        if(type == "Sidan"){
            price = 200000.00; // sidans cost 20K w/o discount 
        }else
        {
            price = 500000.00; // Bakkies cost 50K w/o discount
        }
        
        reducedValue = price * (discountValue/100);
        double newPrice = price - reducedValue;
        // return newPrice; 
        // newPrice = newPrice;
    };

    //accessors:
    void displayCarPrice(){
        calculateNewPrice();
        if(discounts == true){
            cout << "You are on a service plan" << endl;
            cout << "Without discount you would pay: " <<price << endl;
            cout << "The price of your car is : " << "R" << newPrice  << endl;
        }else{
            cout << "The price of your car is : " << price << endl;
            cout << "if you opted for the service plan, you would save R"<< reducedValue << endl;
        }
        
    }

    // mutator that sets the price
    void setPrice(float newPrice){
        cout << "ENTER price of the car" << endl;
        cin >> price;
        price = newPrice;
    }

    void setCarType(string type){
        type = type;        
    }

    void setServicePlan(){
        discounts = true;
    }
};


int main()
{
    cout.precision(dbl::max_digits10);    
// instatiation:
    // assuing 3 people bought/buying a car:     
    Car cars[3];
    string input; 
    string typeOfCar;

    for(int i = 0; i < 3; i++){

        cout << "Which type of car do you want? (A)Sidan, (B)Bakkie" << endl;
        cin >> typeOfCar;
        if(typeOfCar == "A"){
            cars[i].setCarType("Sidan");
        }else{
            cars[i].setCarType("Bakkie");
        }
        
        cout << "Car "<< i+1 << ". You're about to purchase a new car, Do you want a service plan? Y/N" << endl;
        cin >> input; 
        if(input == "Y" || input == "y"){
            cars[i].setServicePlan();
        }
    
    }

    // information of the 3 cars purchased:
    for(int i = 0; i < 3; i++){
        cout << "INFORMATION ABOUT CAR "<< i+1 << endl;
        cars[i].displayCarPrice();
        cout << " " << endl;
    }

    return 0;
}
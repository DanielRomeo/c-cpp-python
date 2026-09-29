#include <iostream>
using namespace std;

/*
This design pattern is about seperating what changes from what stays the same:
- In this example ; really, its about splitting the if-else ... because we 
are afrid of what if the logic gets too big in between the if else's!

*/

// Base class of the Payment types:
class PaymentStrategy{
    public:
    virtual void pay(double amount) = 0; // every payment type will have a payment type...
    virtual ~PaymentStrategy() = default;
};

// Now we can add the derived classes:
class CardPayment: public PaymentStrategy{
public:
    void pay(double amount) override {
        cout << "Paying R" << amount << " with a card \n";
    }
};
class CashPayment : public PaymentStrategy{
public:
    void pay(double amount ) override {
        cout << "Paying R" << amount << " with a cash \n";
 
    }
};
class Checkout{
private:
    PaymentStrategy* paymentMethod;

public:
    Checkout(PaymentStrategy* method){
        paymentMethod = method;
    }
    void processPayment(double amount){
        paymentMethod->pay(amount);
    }
};




int main(){


    cout << "Hello world"<< "\n";

    return 0;
}
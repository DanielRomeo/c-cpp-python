#include <iostream>

// Interface class:
// THE PRODUCT
class Notification {
public:
    virtual void send(const std::string& message) = 0;
    virtual ~Notification() = default;
};

// CONCRETE PRODUCTS

class EmailNotification : public Notification {
public:
    void send(const std::string& message) override {
        std::cout << "Email: " << message << "\n";
    }
};

class SMSNotification : public Notification {
public:
    void send(const std::string& message) override {
        std::cout << "SMS: " << message << "\n";
    }
};

// Factory Interface: THE CREATOR
class NotificationFactory{
 public:
     virtual Notification* createnotification() = 0; // function
     virtual ~NotificationFactory() = default; // destructor
 };

// Each factory decides which notification implementation to create:
// CONCRETE CREATORS

 class emailfactory : public NotificationFactory{
 public:
     Notification* createnotification() override{
         return new EmailNotification(); // emailNotification is the concrete class that was chosen to be instantiated
     }
 };

int main() {

    // Instantiate:
    EmailNotification gmailNotificationDaniel;
    SMSNotification TMobileDaniel;
    TMobileDaniel.send("This is an sms");
    gmailNotificationDaniel.send("Hello to email");


    return 0;
}
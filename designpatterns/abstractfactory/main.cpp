#include <iostream>
#include <memory>


// abstract products:
class Button{
public:
    virtual ~Button() = default;
    virtual void paint() = 0;    
};
class Checkbox{
public:
    virtual ~Checkbox() = default;
    virtual void paint() = 0;   
};

// concrete products for win:
class WinButton : public Button{
public:
    void paint() override{
        std::cout << "Rendering windows style button \n";
    }
};
class WinCheckbox : public Checkbox{
public:
    void paint() override{
        std::cout << "Rendering windows style checkbox \n";
    }
};
class MacButton : public Button{
public:
    void paint() override{
        std::cout << "Rendering mac style button \n";
    }
};
class MacCheckbox : public Checkbox{
public:
    void paint() override{
        std::cout << "Rendering mac style checkbox \n";
    }
};

// Abstract factory:
class GUIFactory{
    public:
    virtual ~GUIFactory() = default;
    virtual std::unique_ptr<Button> createButton() = 0;
    virtual std::unique_ptr<Checkbox> createCheckbox() = 0;
};

// Concrete factories:
class WinFactory : public GUIFactory{
    public:
    std::unique_ptr<Button> createButton() override{
        return std::make_unique<WinButton>();
    }
    std::unique_ptr<Checkbox> createCheckbox() override{
        return std::make_unique<WinCheckbox>();
    }
};
class MacFactory : public GUIFactory{
    public:
    std::unique_ptr<Button> createButton() override{
        return std::make_unique<MacButton>();
    }
    std::unique_ptr<Checkbox> createCheckbox() override{
        return std::make_unique<MacCheckbox>();
    }
};


// Usage:
void application(GUIFactory& factory){
    auto btn  = factory.createButton();
    auto check = factory.createCheckbox();
    check->paint();
    btn->paint();
    
}

int main(){
    
    MacFactory mac;
    application(mac);

    


    return 0;
}
#include <iostream>
#include <string>


// function to calculate the tax rate:
void calculateTaxRate(){
    double total_income;
    double income_tax;
    double total_income_after_tax;

    // insert your income: calcualtion:
    std::cout << "Enter your total income for the year: ";
    std::cin >> total_income;

    if (total_income < 250000) {
        // 10 percent
        income_tax = total_income * 0.10;
    }else if(total_income > 250000 && total_income < 500000){
        // 15 percent
        income_tax = total_income * 0.15;

    }else if(total_income > 500000 && total_income < 1000000){
        // 20 percent
        income_tax = total_income * 0.20;

    } else {
        // if the income is greater than a million:
        income_tax = total_income * 0.25;
    }

    // output the results:
    std::cout << "Your income tax for the year is: R" << income_tax << std::endl;
    // total income after the tax has been deducted:
    total_income_after_tax = total_income - income_tax;
    std::cout << "Your total income after tax is: R" << total_income_after_tax << std::endl;
}

// function to get the filing info:
void filingStatus(){
    std::cout << "Enter your filing status number." << '\n';
    std::cout << "1) Single" << '\n' << "2) Married filing jointly \n" <<  "3) Married  filing separelty \n" << "4) Qualified widow"<<  "\n";
    
    int statusNumber;
    std::cin >> statusNumber;

    switch (statusNumber)
    {
    case 1:
        // this is if the user is single
        calculateTaxRate();
        break;
    case 2: 
        // this is if the  user is married jointly:
        double income1, income2;
        std::cout << "Enter income for the first spouse: ";
        std::cin >> income1;
        std::cout << "Enter income for the second spouse: ";
        std::cin >> income2;
        std::cout  << "Your calculation  is : " << income1+income2 << '\n';
        break;
    case 3:
        // this is when the user is married filing seperatly
        calculateTaxRate();
        break;
    case 4:
        // user is a widow:
        double income3;
        std::cout << "Enter income for you: ";
        std::cin >> income3;
        std::cout  << "Your calculation  is : " << income3-100000 << '\n';
        break;
    default:
        break;
    }

    
}


int main(){

    filingStatus();

    return  0;
}
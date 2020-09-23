/*
    project name: Restaurant discount calculator:
*/
#include <iostream>
#include <cmath>
#include <cstdlib>
#include "math.h"
#include <vector>
#include <iomanip>
// #include <inStream>
// #include <outStream>
// using namespace std;
#include <fstream>
#include <string>

float CalcDiscount1(float TotalBill, int DiscountPercentage){
    float Total = 0;
    float DiscountValue = (TotalBill*DiscountPercentage)/100;
    Total = TotalBill - DiscountValue;
    return Total;
}

float CalcDiscount2(float TotalBill, int DiscountPercentage, int ThursdayDiscountPercentage){
    float Total = 0;
    int TotalDiscount = DiscountPercentage + ThursdayDiscountPercentage;
    float DiscountValue = (TotalBill*TotalDiscount)/100  ;
    Total = TotalBill - DiscountValue;
    return Total;
}

int GetThursdayPercentage(){
    int percentValue;
    std::cout << "Select a Percent value between 5 - 10 for the discount... :" << std::endl;
    std::cin >> percentValue;
    if(percentValue > 10 || percentValue < 5){
        std::cout << "[ERROR] = The percentage value must be between 5% and 10%." << std::endl;
        GetThursdayPercentage();
    }
    return percentValue;   
}

int main(){

    float TotalBill;
    float DiscountPercenatge;
    std::string IsThursday;

    std::cout << "Please enter the Total bill amount :" << std::endl;
    std::cin >> TotalBill;
    
    std::cout << "Please enter the Discount Percantage:" << std::endl;
    std::cin >> DiscountPercenatge;

    //check if ist thursday:
    std::cout << "Is today a thursday?: yes/no" << std::endl;
    std::cin >> IsThursday;
    if(IsThursday == "yes" || IsThursday == "y"){
        TotalBill = CalcDiscount2(TotalBill, DiscountPercenatge, GetThursdayPercentage());
    }else{
        TotalBill = CalcDiscount1(TotalBill, DiscountPercenatge);
    }

    std::cout<< "The customers Bill is :" << TotalBill << std::endl;

    return 0;
}

#include <iostream>
#include <utility> // i had to learn pairs for this

// getthe user data:
std::pair<double, double> getData(){
    double weight, height;
    std::cout  << "Insert your weight: \n";
    std::cin >> weight;
    std::cout  << "Insert your height: \n";
    std::cin >> height;
    // std::pair<double, double> p{weight, height};
    return {weight, height};
}

// calculate BMI  function:
double calcBMI(std::pair<double, double> data){
    double BMI = data.first / (data.second)*2;
    return BMI;
}

// diplay fitness function: 
void displayFitnessResults(double BMI){
    // std::cout << "BMI " << BMI << std::endl;
    if(BMI < 18.5){
        std::cout << "You are underweight. \n";
    }else if(BMI >= 18.5 && BMI <= 24.9){
        std::cout << "You are Healthy. \n";
    }else if(BMI >=25.0 && BMI <= 29.9){
        std::cout << "You are Overweight. \n";
    }else if(BMI > 30.0){
        std::cout << "You are Obese. \n";
    }
};  


int main(){

    // calling the function in the function in the function to 
    // maximize the use of the return values...
    displayFitnessResults(calcBMI( getData()));

    return 0;
}
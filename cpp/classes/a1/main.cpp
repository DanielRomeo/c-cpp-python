#include <iostream>
#include <string>
#include "person.h"



int main(){
    Person romeo("romeo", 77);
    Person lethabo("lethabo", 20);

    romeo.GetPersonDetails();

    lethabo.GetPersonDetails();

    return 0;
}
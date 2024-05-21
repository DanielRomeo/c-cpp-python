#include <iostream>
#include <string>
#include "person.h"
#include "dateofbirth.h"



int main(){
    Person romeo("romeo", 77);
    Person lethabo("lethabo", 20);

    romeo.GetPersonDetails();

    lethabo.GetPersonDetails();

    DOB dob(1997,04,24);

    return 0;
}
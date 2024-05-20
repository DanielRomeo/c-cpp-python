#include "dateofbirth.h"


DOB::DOB(int year, int month, int day){
    this->year = year;
    this->month = month;
    this->day = day;
}

void DOB::setDOB(int year, int month, int day){
    this->year = year;
    this->month = month;
    this->day = day;
}

std::tuple<int, int ,int> DOB::getDOB() const{
    return std::make_tuple(this->year, this->month, this->day);
}


#ifndef DATEOFBIRTH_H
#define DATEOFBIRTH_H
#include <iostream>
#include <tuple>

class DOB{
public:
    DOB(int year, int month, int day);
    void setDOB(int year, int month, int day); 
    std::tuple<int, int ,int> getDOB() const;

private:
    int year, month, day;
};

#endif
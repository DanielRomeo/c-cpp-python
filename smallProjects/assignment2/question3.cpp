#include <iostream>
#include <cmath>
#include <cstdlib>
#include "math.h"
#include <vector>
// #include <inStream>
// #include <outStream>
// using namespace std;
#include <fstream>
#include <string> 
#include <limits>

using namespace std;

typedef std::numeric_limits< double > dbl;
class ExamType{
    private:
    string module;
    string venue;
    int time;
    string date;

    public:
    ExamType(){
        module = "COS1512";
    };
    friend void displayTestInfo(ExamType exam[12]);
    
};

void displayTestInfo(ExamType exam[12]){
    for (int i = 0; i < 12; i++){
        if (exam[i].module == "COS1512"){
            cout << "COS1512 will be written on "<< exam[i].date << " at " << exam[i].time << endl;
        }
    }
}

int main()
{
    ExamType exams[12];
    displayTestInfo(exams);

    return 0;
}
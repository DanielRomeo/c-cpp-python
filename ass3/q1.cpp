// gradebook.cpp - implementation of the Gradebook class
#include "gradebook.h"

// default constructor sets the name to empty and the numbers to 0
Gradebook::Gradebook()
{
    studentName = "";
    score = 0;
    gradeLevel = 0;
}

// overloaded constructor sets the student's details to what is passed in
Gradebook::Gradebook(string name, int sc, int gl)
{
    studentName = name;
    score = sc;
    gradeLevel = gl;
}

// destructor does not need to do anything because Gradebook does not use
// any dynamic memory (there is no "new" used inside this class)
Gradebook::~Gradebook()
{
}

// returns the student's score
int Gradebook::get_score() const
{
    return score;
}

// this friend function compares two students.
// it returns true if student1's score AND grade level are both
// equal to or better than student2's, and false otherwise
bool operator>=(const Gradebook & student1, const Gradebook & student2)
{
    if (student1.score >= student2.score && student1.gradeLevel >= student2.gradeLevel)
        return true;
    else
        return false;
}

// this friend function reads one student's details (name, score, grade level)
// from the given input stream, e.g. a file
istream & operator>>(istream & in, Gradebook & student)
{
    in >> student.studentName >> student.score >> student.gradeLevel;
    return in;
}

// this friend function displays a student's name, score and grade level
ostream & operator<<(ostream & out, const Gradebook & student)
{
    out << "Name: " << student.studentName
        << ", Score: " << student.score
        << ", Grade level: " << student.gradeLevel << endl;
    return out;
}

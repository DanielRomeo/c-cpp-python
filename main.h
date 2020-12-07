#ifndef MAIN_H
#define MAIN_H


class Person{
    private:
        string name;
        flaot salary;

    public:
        Person(string name, float salary);
        Person();

       	string getname();
		void setSalary(float amount);
		void raiseSalary(int percent);
		friend bool operator <(const Person& person1, const Person& person2);
        friend ostream &operator <<(ostream& output, Person& person1);
};

#endif
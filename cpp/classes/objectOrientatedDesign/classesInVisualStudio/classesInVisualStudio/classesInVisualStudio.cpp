#include <iostream>

class Clock {
public:
	// Constructors:
	Clock();
	Clock(int hours, int mins, int secs);

	//void testTime(int &hours) {

	//}

	void printHours() {
		std::cout << hours << std::endl;
	}

private:
	int hours;
	int mins;
	int secs;
};

int main()
{
	int hours = 100;
	int mins = 1;
	int secs = 30;
	Clock myClock(hours, mins, secs);

	//
	myClock.printHours();
}

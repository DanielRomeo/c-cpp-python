#include <iostream>

class Clock {
public:
	Clock() {
		hours = 0;
		mins = 0;
		secs = 0;
	}

	Clock(int _hours, int _mins, int _secs) : hours(_hours), mins(_mins), secs(_secs) {}

	void printClock() {
		std::cout << "The time is : " << hours << ":" << mins << ":" << secs << std::endl;
	}

private:
	int hours;
	int mins;
	int secs;
};

int main()
{
	Clock myClock(20, 10, 44);
	Clock newClock;

	myClock.printClock();
	
	newClock = myClock;

	newClock.printClock();

}

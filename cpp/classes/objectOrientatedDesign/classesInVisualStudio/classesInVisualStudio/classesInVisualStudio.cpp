#include <iostream>

class Clock {
public:
	Clock() {}

	Clock(int _hours, int _mins, int _secs): hours(_hours), mins(_mins), secs(_secs) {}

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
	Clock myClock;
	Clock newClock(20, 22, 31);

	newClock.printClock();
}

// Unique_ptr tutorial.
#include <iostream>
#include <memory> 
using namespace std;

// Product interface:
class Transport {
public:
	virtual ~Transport() = default;
	virtual void deliver() = 0;
};

// Concreate products:
class Truck : public Transport {
public:
	void deliver() override {
		std::cout << "Delivering by Truck. \n";
	}
};
class Ship : public Transport {
public:
	void deliver() override {
		std::cout << "Delivering by Ship. \n";
	}
};

// Creator class with Factory method:
class Logistics {
public:
	virtual ~Logistics() = default;
	virtual Transport* createTransport() = 0;

	void planDelivery() {
		Transport* transport = createTransport();
		transport->deliver();

		// delete the transport, to avoid memory leaks:
		delete transport;
	}
};

// Concrete Creators:
class RoadLogistics : public Logistics {
public:
	Transport* createTransport() override {
		return new Truck;
	}
};
class SeaLogistics : public Logistics {
public:
	Transport* createTransport() override {
		return new Ship;
	}
};

// client:
int main() {
	Logistics* roadLogistics = new RoadLogistics();
	Logistics* seaLogistics = new SeaLogistics();

	roadLogistics->planDelivery();
	seaLogistics->planDelivery();
	
	delete roadLogistics;
	delete seaLogistics;

	return 0;
}
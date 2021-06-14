#include <iostream>
#include <string>
using namespace std;

template <class Type>
class queueType: public queueADT<Type>
{
public:
	const queueType<Type>& operator=(const queueType<Type>&){

	};

	bool isEmptyQueue() const{
		return (count == 0);
	};
	
	bool isFullQueue() const{
		return (count == maxQueueSize);
	};

	void initializeQueue(){
		queueFront = 0;
		queueRear = maxQueueSize - 1;
		count = 0;
	};

	Type front() const{
		assert(!isEmptyQueue());
		return list[queueFront];
	};

	Type back() const{
		assert(!isEmptyQueue());
		return list[queueRear];
	};

	void addQueue(const Type& queueElement){
		if (!isFullQueue()){
		queueRear = (queueRear + 1) % maxQueueSize; //use the
		//mod operator to advance queueRear
		//because the array is circular
		count++;
		list[queueRear] = newElement;
		}
		else
		cout << "Cannot add to a full queue." << endl;
	};

	void deleteQueue();
	
	// constructor
	queueType(int queueSize = 100){
		if (queueSize <= 0){
			cout << "Size of the array to hold the queue must " << "be positive." << endl;
			cout << "Creating an array of size 100." << endl;
			maxQueueSize = 100;
		}else{
			maxQueueSize = queueSize;
			queueFront = 0;
			queueRear = maxQueueSize - 1;
			count = 0;
			list = new Type[maxQueueSize];
		}
	};

	queueType(const queueType<Type>& otherQueue){

	};

	~queueType(){

	};
private:
	int maxQueueSize;
	int count;
	int queueFront;
	int queueRear;
	Type * list;

};



int main(){




	return 0;
}
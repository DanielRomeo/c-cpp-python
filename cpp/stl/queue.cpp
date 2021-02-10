#include <iostream>
#include <queue>
/*
	The queue container uses the FIFO method 
	functions: front, back, push, pop, empty, size
	where front() is the front most number
*/

// function that prints a queue
void print(std::queue<uint> que){
	while(!que.empty()){
		std::cout << que.front() << std::endl;
		que.pop(); // we're counting by removing the items
	}
}

int main(){

	std::queue<uint> que;

	que.push(2);
	que.push(8);
	que.push(100);

	print(que);

	return 0;
}
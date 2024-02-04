#include <iostream>
://github.com/DanielRomeo/c-cpp-pythonhttps://github.com/DanielRomeo/c-cpp-pythonhttps://github.com/DanielRomeo/c-cpp-pythonhttps://github.com/DanielRomeo/c-cpp-pythonerver {
        listen 80;
        listen [::]:80;

        root /home/captainprice/actions-runner/randnote-blockchain/randnote-blockchain/randnote-blockchain/dist;
        index index.html index.htm index.nginx-debian.html;

        server_name blockchain.randnotex.co.za www.blockchain.randnotex.co.za;

        location / {
                try_files $uri $uri/ =404;
        }
}
#include <cmath>
#include <array>
#include <string>
#include <vector>
#include <iterator>
#include <list>
#include <set>
#include <variant>

// I should create a templated function that can print the elements of any type of container 

/*
LIST: this is a doubly linked list::: [x|Data|y] -> [x|Data|y]
lists are faster than vectors, deque, forward_lists in terms of insert, remove and moving items around. considering we have an iterator
we should use this instead of [doubly linked list] because it is well tested and bunch of functions
operators: =, assign, front(returns first element), back(returns last element), empty(returns 1 or 0), 
size, max_size, clear, insert, emplace(for optimization), push_back, pop_back, push_front, pop_front,
	reverse, sort, merge, slice, unique(removes duplicates), remove
*/

void printList(std::list<uint> list){
	for(auto i : list){
		std::cout << i << ' ' << std::endl;
	}
}

/*Print vactor*/
void printVector(std::vector<uint> vector){
	for(auto i : vector){
		std::cout << i << ' ' << std::endl;
	}
}

int main(){
#if 0
	std::list<uint> list1 = {6,4,8,9, 9};
	std::list<uint> list2 = {100};
	std::list<uint> list3;
	list2 = list1;

	std::cout << list2.front() << std::endl;
	// std::cout << list3.empty() - 1 << std::endl;
	// print the first list:
	for(auto i : list2){
		std::cout << i << ' ' << std::endl;
	}
#endif

	{
		#if 0
		// declare new lists and use advanced functions:
		std::list<uint> list10 = {154400, 12,16,1000,2000,3000};
		std::list<uint> list11 = {19000};
		std::list<uint> list12;
		std::list<uint> list13;

		list12.assign(list10.begin(), list10.end()); // takes it 2 memory addresses
		// list13.assign(10, 4); // we could instead assign a repetetion of values
		list10.unique(); // removes duplicates 
		list10.merge(list11);
		list10.sort();
		for(auto i : list10){
			std::cout << i << ' ';
		}
		std::cout << std::endl;
		#endif
	}


	{
		//generate random numbers:::
		srand (time(NULL));
		uint rnumber = rand() % 10 + 1; // generate number between 1 and 10
	}		


	{
		// testing sets... storing containers into sets
		std::vector<uint> vec = {NULL, 0, 0};
		// printVector(vec);
		// if(vec[0] == vec[1]){
		// 	std::cout << true << std::endl;
		// }
	}

	{
		// lets see what happens when i add a empty list to a list:
		// std::list<uint> list1;
		// std::list<uint> list2= {100};
		// // list1.push_back( 100);
		// list2.merge(list2);		
		
		// // printList(list1);
		// printList(list2);
		// std::cout << list2.size();

		
	}
		

	return 0;
}

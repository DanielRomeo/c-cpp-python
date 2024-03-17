/*
This file is meant to hash 2 nodes together which are integers..e
*/

#include <iostream>
#include <functional>

// define a node struct:
struct Node{
    int data;
};


// function to hash the nodes together:
size_t hash_nodes(const Node& node1, const Node& node2){
    // hash using the XOR operator
    return std::hash<int>()(node1.data) + std::hash<int>()(node2.data);
}

int main(){
    // initialize a node and call function:
    Node node1, node2;
    node1.data = 100;
    node2.data = 2;
    std::cout << hash_nodes(node1, node2) << std::endl;



    return 0;
}
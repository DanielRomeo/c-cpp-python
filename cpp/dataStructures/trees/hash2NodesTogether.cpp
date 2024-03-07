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
    return std::hash<int>(node1.data) ^ std::hash<int>(node2.data);
}

int main(){


    return 0;
}
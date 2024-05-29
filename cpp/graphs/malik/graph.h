#ifndef GRAPH_H
#define GRAPH_H

class Graph{

public:
    bool isEmpty() const ;
    void createGraph();
    void clearGraph();
    void printGraph() const;
    void depthFirstTraversal(); // when working on the implementation. add const see what it says
    void depthFirstTraversalAtVertex(int vertex);
    void breadthFirstTraversal();
    Graph(int size= 0);
    ~Graph();
protected:
    int maxSize; // maximum number of vertices:
    int gSize;
    unorderedLinkedList<int> * graph;
private:
    void dft(int v, bool visited[]); // array of booleans...
}

#endif

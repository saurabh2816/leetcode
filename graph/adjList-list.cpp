//
// Created by Saurabh Rana on 2019-09-01.
// Graph representation using adjacency list - List

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <set>
#include <map>
#include <deque>
#include <queue>
#include <cctype>
#include <string>
#include <fstream>
#include <list>
using namespace std;

class Graph{
    int vertices;
    list<int> *adjList;

public:

    Graph(int V) {
        this->vertices = V;
    }

    ~Graph() {
        delete adjList;
    }

    void addEdge(int src, int dest) {

    }
};
int main() {


    return 0;
}
// Created by Saurabh Rana on 2019-09-01.

/* Simple implementation of graph using adjacency list (vector).*/
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
using namespace std;

class Graph{
public:
    vector<vector<int>> adjList;

    Graph(vector<vector<int>>& edges, int N) {
        adjList.resize(N);


        for(auto &edge: edges) {
            int src = edge[0];
            int dest = edge[1];
            adjList[src].push_back(dest);
        }
    }

};

int main() {

    // Adjacency list representation
    vector<vector<int>> edges = {
            {0,1}, {1,2}, {2,0}, {2,1}, {3,2}, {4,5}, {5,4}
    };

    int N = 6;
    Graph graph(edges, N);
    cout<<graph.adjList[0][2];

    return 0;
}


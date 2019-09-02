// Given a graph and a source vertex. Find the shortest path from the source vertex to all the vertices.

/*
 * Basically a BFS approach in which,
 *  - we keep a container of all the visited vertices. (bcoz -- well lets think about that later)
 *  - assign a distance to all the vertices in the graph (INF). This way we know if the vertices are not visited.
 *  - assign 0 to source vertex so it's picked first (this is make algo generic)
 *  - What's the end condition of this BFS ??
 *      > usually it's until the queue is empty. But what are all the nodes in queue. Usually we traverse the graph or matrix or whatever and
 *      then add the node/vertices/{i, j} to the queue. So queue is all the nodes /vertices that satisfies our condition.

        > we don't have any condition here, we want the shortest path from src to all nodes. So in this case if we visit all the node
        then we have accomplished our goal. This is so because BFS always finds the shortest distance and if all nodes are visited then
        we visited those nodes in the shortest path/way possible.

 * - Pick a vertex (u) which is not visited and has the minimum distance value.
 * - add to visited set
 * - update the distance of adjacent vertices to u.
 */
#include <iostream>
#include <list>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

class Graph {
    int V;  // no. of vertices
    list< pair<int, int> > *adj;

public:
    Graph(int V) {
        this->V = V;
        adj = new list< pair<int, int> >[V];
    }

    void addEdge(int u, int v, int w) {
        adj[u].emplace_back(v, w);
        adj[v].emplace_back(u, w);
    }

    // prints all shortest paths from s
    void shortestPath(int src) {

        // visited set
        set< pair<int, int> > visited;

        // vector for distances from source node
        vector<int> dist(V, INT_MAX);

        visited.insert({0, src});
        dist[src] = 0;

        while(!visited.empty()) {

            // extract the minimum value in visited set
            pair<int, int> p = *(visited.begin());
            visited.erase(visited.begin());

            int src = p.second;

            list< pair<int, int> >::iterator itr;

            // iterate through all the adjacent vertices and update the distance
            for(itr = adj[src].begin(); itr!=adj[src].end(); itr++) {
                int v =
            }

        }

    }

};


int main() {
    int V = 9;
    Graph g = new Graph(V);

    //  making above shown graph
    g.addEdge(0, 1, 4);
    g.addEdge(0, 7, 8);
    g.addEdge(1, 2, 8);
    g.addEdge(1, 7, 11);
    g.addEdge(2, 3, 7);
    g.addEdge(2, 8, 2);
    g.addEdge(2, 5, 4);
    g.addEdge(3, 4, 9);
    g.addEdge(3, 5, 14);
    g.addEdge(4, 5, 10);
    g.addEdge(5, 6, 2);
    g.addEdge(6, 7, 1);
    g.addEdge(6, 8, 6);
    g.addEdge(7, 8, 7);

    g.shortestPath(0);

    return 0;

}

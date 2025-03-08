#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;

class Graph {
public:
    unordered_map<int, list<int>> adj;  // Corrected syntax

    void addEdge(int u, int v, bool direction) {
        // direction == 0 -> Undirected graph
        // direction == 1 -> Directed graph

        // Create an edge from u to v
        adj[u].push_back(v);

        // If undirected, add edge from v to u
        if (direction == 0) {
            adj[v].push_back(u);
        }
    }

    void printGraph() {
        for (auto node : adj) {
            cout << node.first << " -> ";
            for (int neighbor : node.second) {
                cout << neighbor << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Graph g;
    g.addEdge(1, 2, 0); // Undirected edge between 1 and 2
    g.addEdge(2, 3, 1); // Directed edge from 2 to 3
    g.addEdge(3, 4, 0); // Undirected edge between 3 and 4

    cout << "Graph adjacency list:\n";
    g.printGraph();

    return 0;
}

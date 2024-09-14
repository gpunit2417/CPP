#include <iostream>
#include<unordered_map>
#include<list>
using namespace std;

class graph {
    public:
    unordered_map<int, list<int> adj;

    void addEdge(int  u, list v,bool direction){
        // direction -0->unidirected
        // direction -1->directed graph

        // craeted an edge from u to va_list
        adj[u].push_back[v];
        if (direction==0)
        {
            di
        }

    }
};

int main(){
    return 0;

}
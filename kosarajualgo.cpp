//code studio
#include<unordered_map>
#include<stack>
#include<list>
void dfs(int node, unordered_map<int, bool> &vis, stack<int> &s, unordered_map<int, list<int> > &adj){
    vis[node] = true;
    for(auto nbr : adj[node]){
        if(!vis[nbr]){
            dfs(nbr, vis, s, adj);
        }
    }

    //topo logic
    s.push(node);
}

void revDFS(int node, unordered_map<int, bool> &vis, unordered_map<int, list<int> > &adj){
    vis[node] = true;
    for(auto nbr:adj[node]){
        if(!vis[nbr]){
            dfs(nbr, vis, adj);
        }
    }
}

int stronglyConnectedComponents(int v, vector<vector<int> > edges){
    //adj
    unordered_map<int, list<int> > adj
    for(int i=0; i<edges.size(); i++){
        int u=edges[i][0];
        int v=edges[i][1];
        adj[u].push_back(v);
    }

    //topoSort
    stack<int>s;
    unordered_map<int, bool> vis;
    for(int i=0; i<v; i++){
        if(!vis[i]){
            dfs(i, vis, s, adj);
        }
    }

    //create a transpose graph
    unordered_map<int, list<int> > transpose;
    for(int i=0; i<v; i++){
        vis[i] = 0;
        for(auto nbr:adj[i]){
            transpose[nbr].push_back(i);
        }
    }

    //dfs call
    int count = 0;
    while(!s.empty()){
        int top = s.top();
        s.pop();
        if(!vis[top]){
            count++;
            revDFS(top, vis, transpose);
        }
    }

    return count;
}
//t.c. o(nodes + edges)
//s.c. o(n)
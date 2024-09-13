//code studio
//without -ve cycle
int bellmanFord(int n, int m, int src, int dest, vector<vector<int> > edges){
    vector<int> dist(n+1, 1e9);
    dist[src] = 0;
    //n-1 times
    for(int i=1; i<=n; i++){
        //traverse on edges
        for(int j=0; j<m; j++){
            int u=edges[j][0];
            int v=edges[j][1];
            int wt = edges[j][2];

            if(dist[u] != 1e9 && (dist[u] + wt < dist[v])){
                dist[v] = dist[u] + wt;
            }
        }
    }
    return dest;
}

//with -ve cycle
int bellmanFord(int n, int m, int src, int dest, vector<vector<int> > edges){
    vector<int> dist(n+1, 1e9);
    dist[src] = 0;
    //n-1 times
    for(int i=1; i<=n; i++){
        //traverse on edges
        for(int j=0; j<m; j++){
            int u=edges[j][0];
            int v=edges[j][1];
            int wt = edges[j][2];

            if(dist[u] != 1e9 && (dist[u] + wt < dist[v])){
                dist[v] = dist[u] + wt;
            }
        }
    }
    
    //check for -ve cycle
    bool flag=0;
    for(int j=0; j<m; j++){
        int u=edges[j][0];
        int v=edges[j][1];
        int wt = edges[j][2];

        if(dist[u] != 1e9 && (dist[u] + wt < dist[v])){
            flag = 1;
        }
    }
    if(flag == 0){
        return dist[dest];
    }
    else{
        return -1;
    }
}
//t.c. o(nodes * edges)
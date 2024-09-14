//code studio
#include<unordered_map>
#include<list>
#include<set>
vector<int> dijkstra(vector<vector<int> > &vec, int vertices, int edges, int source){
    //create adj list
    unordered_map<int, list<pair<int, int> > > adj;
    for(int i=0; i<edges; i++){
        int u=edges[i][0];
        int v=edges[i][1];
        int w=edges[i][2];

        adj[u].push_back(make_pair(v,w));
        adj[v].push_back(make_pair(u,w));
    }

    //create a distance array with infinite value initially
    vector<int> distance(vertices);
    for(int i=0; i<vertices; i++){
        dist[i]= INT_MAX;
    }

    //create set (distance, node)
    set<pair<int, int> > s;
    //initialize distance and set with source node
    dist[source] = 0;
    s.insert(make_pair(0, source));
    while(!s.empty()){

        //fetch the top node
        auto top = *(s.begin());

        int nodeDistance = top.first;
        int topNode = top.second;

        //erase top node
        s.erase(s.begin());
        //traverse on neighbours
        for(auto neighbour: adj[topNode]){
            if(neighbour.second + nodeDistance < dist[neighbour.first]){
                auto record = s.find(make_pair(dist[neighbour.first], neighbour.first));
                //if record found, erase it
                if(record != s.end()){
                    s.erase(record);
                }

                //distance update
                dist[neighbour.first] = neighbour.second + nodeDistance;

                //push record in set
                s.insert(make_pair(dist[neighbour.first], neighbour.first)); 
            }
        }
    }
    return dist;
}
//t.c o(edges log nodes)
//s.c o(nodes + edges)
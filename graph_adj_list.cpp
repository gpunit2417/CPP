#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;

class graph{
    public:
    unordered_map<int, list<int> > mp;

    void addEdge(int u, int v, bool direction){

        //direction 0 means undirected
        //direction 1 means directed

        //create an edge from u to v
        mp[u].push_back(v);
        if(direction == 0){
            mp[v].push_back(u);
        }
    }

    void printList(){
        for(auto i:mp){
            cout<<i.first<<"-> ";
            for(auto j:i.second){
                cout<<j<<",";
            }
            cout<<endl;
        }
    }
};

int main(){
    int n;
    cout<<"enter the number of nodes "<<endl;
    cin>>n;

    int m;
    cout<<"enter the number of edges "<<endl;
    cin>>m;

    graph g;
    for(int i=0; i<m; i++){
        int u,v;
        cin>>u>>v;
        //create an undirected graph
        g.addEdge(u,v,0);
    }
    g.printList();
    return 0;
}
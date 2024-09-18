#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int, string> m;

    m[1] = "punit";
    m[13] = "goyal";
    m[2] = "kumar";

    m.insert({5, "coding"});

    cout<<"before erase "<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"finding 13 "<< m.count(13)<< endl;

    cout<<"after erase "<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second <<endl;
    }
    cout<<endl;
    auto it = m.find(5);
    for(auto i=it; i!=m.end(); i++){
        cout<<(*i).first<<endl;
    }
}
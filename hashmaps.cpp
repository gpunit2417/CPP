#include<iostream>
#include<unordered_map>
#include<map>
using namespace std;

int main(){
    //creation of unordered map
    unordered_map<string, int> m;

    //insertion ka 1 tarika
    pair<string, int> p = make_pair("punit", 1);
    m.insert(p);

    //insertion ka 2 tarika
    pair<string, int> pair2("goyal", 2);
    m.insert(pair2);

    //insertion ka 3 tarika
    m["ji"] = 3;

    //search
    cout<<m["punit"]<<endl;
    cout<<m.at("punit")<<endl;

    // cout<<m.at("unknownkey")<<endl;
    cout<<m["unknownkey"]<<endl;
    cout<<m.at("unknownkey")<<endl;

    //size
    cout<<m.size()<<endl;

    //to check presence
    cout<<m.count("punit")<<endl;

    //erase or to remove
    m.erase("ji");
    cout<<m.size()<<endl;

    //traversal technique
    //using for loop
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    //using iterator
    unordered_map<string, int> :: iterator it = m.begin();
    while(it != m.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    } 

    return 0;
}

// the output of traversal in unordered map is random and in map or ordered map, the output is in the same order in which it is added.
//when 25th line is uncommented, the output will be an error because there is no key in the map with the search name.
//the output of 26th line is 0 as it creates a new pair with search name.
//the output of 27th line is 0 as the pair is already created.
// given an array of size n. find first repeating element in the array of integers i.e. an element that can appear more than once and whose index
// of first occcurrence is smallest

//code not running
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter size"<<endl;
    cin>>n;

    int a[n];
    cout<<"array elements "<<endl;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int N = 10000;

    int idx[N];
    for(int i=0; i<N; i++){
        idx[i] = -1;
    }

    int minidx =INT_MAX;
    for(int i=0; i<n; i++){
        if(idx[a[i]] != -1){
            minidx = min(minidx, idx[a[i]]);
        }
        else{
            idx[a[i]] = i;
        }
    }
    if(minidx == INT_MAX){
        cout<<"-1"<<endl;
    }
    else{
        cout<< minidx + 1 <<endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter size"<<endl;
    cin>>n;

    int arr[n];
    cout<<"array elements"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int N = 10000;
    int check[N];
    for(int i=0; i<N; i++){
        check[i] = 0;
    }


    for(int i=0; i<n; i++){
        if(arr[i]>=0){
            check[arr[i]] = 1;
        }
    }

    int ans = -1;
    for(int i=0; i<N; i++){
        if(check[i] ==false){
            ans = i;
            break;
        }  
    }

    cout<<ans<<endl;
    return 0;
}
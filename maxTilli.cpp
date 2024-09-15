#include<iostream>
using namespace std;


int main(){
    int mx = -1999999;
    int n;
    cin>>n;

    int arr[n];
    cout<<"enter array elements "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"max till i"<<endl;

    for(int i=0; i<n; i++){
        mx = max(mx, arr[i]);
        cout<<mx<<" ";
    }

    return 0;
}
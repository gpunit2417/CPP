#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    cout<<"enter the elements"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int ans = 2;
    int j = 2;
    int prevDiff = arr[1] - arr[0];
    int curr = 0;
    while(j<n){
        if(prevDiff == arr[j] - arr[j-1]){
            curr++;
        }
        else{
            prevDiff = arr[j] - arr[j-1];
            curr = 2;
        }
        ans = max(ans, curr);
        j++;
    }
    cout<<ans<<endl;
}
#include<bits/stdc++.h>
using namespace std;

int kadane(int arr[], int n){
    int curr = 0;
    int maxsum = INT_MIN;
    for(int i=0; i<n; i++){
        curr += arr[i];
        if(curr<0){
            curr = 0;
        }
        maxsum = max(maxsum, curr);
    }
    return maxsum;
}
int main(){

    int n;
    cout<<"enter size"<<endl;
    cin>>n;

    int arr[n];
    cout<<"array elements"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int wrapsum;
    int nonwrapsum;

    nonwrapsum = kadane(arr, n);
    int total = 0;
    for(int i=0; i<n; i++){
        total += arr[i];
        arr[i] = -arr[i];
    }

    wrapsum = total + kadane(arr, n);
    cout<<max(wrapsum, nonwrapsum)<<endl;
    return 0;
}
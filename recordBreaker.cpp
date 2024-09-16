// isyana is given the number of visitors at her park on N consecutive days.
// visitors on ith day is Vi. a day is record breaking if:
// visitors on a day is strictly greater than visitors on each previous days. either it is the last day or the number of visitors on the day is strictly
// larger than the number of visitors on the followwing day.

// note that the first day could be a record breaking day.
// please help isyana find out the number of record breaking days.

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n+1];
    arr[n] = -1;

    cout<<"enter elements "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    if(n==1){
        cout<<'1'<<endl;
        return 0;
    }
    int ans = 0;
    int mx = -1;

    for(int i=0; i<n; i++){
        if(arr[i]>mx && arr[i]> arr[i+1]){
            ans++;
        }
        mx = max(mx, arr[i]);
    }
    cout<<ans<<endl;
}
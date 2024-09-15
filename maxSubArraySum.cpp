#include<bits/stdc++.h>
using namespace std;

// int main(){
//     int n;
//     cout<<"enter size"<<endl;
//     cin>>n;

//     int arr[n];
//     cout<<"array elements"<<endl;
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     int maxSum=INT_MIN;
//     for(int i=0; i<n; i++){
//         for(int j=i; j<n; j++){
//             int sum=0;
//             for(int k=i; k<=j; k++){
//                 sum += arr[k];
//             }
//             maxSum = max(maxSum, sum);
//         }
//     }

//     cout<<maxSum<<endl;
//     return 0;
// }

//t.c is o(n3)

//optimized
// int main(){
//     int n;
//     cout<<"enter size"<<endl;
//     cin>>n;

//     int arr[n];
//     cout<<"array elements"<<endl;
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     int currSum[n+1];
//     currSum[0] = 0;

//     for(int i=1; i<=n; i++){
//         currSum[i] = currSum[i-1] + arr[i-1];
//     }

//     int maxSum= INT_MIN;
//     for(int i=1; i<=n; i++){
//         int sum=0;
//         for(int j=0; j<i; j++){
//             sum = currSum[i] - currSum[j];
//             maxSum = max(maxSum, sum);
//         }
//     }
//     cout<<maxSum<<endl;
//     return 0;
// }

//t.c is o(n2)

//optimized - Kadane's algo
int main(){
    int n;
    cout<<"enter size"<<endl;
    cin>>n;

    int arr[n];
    cout<<"enter elements"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int curr = 0;
    int maxi = INT_MIN;

    for(int i=0; i<n; i++){
        curr = curr + arr[i];
        if(curr < 0){
            curr = 0;
        }
        maxi = max(maxi, curr);
    }
    cout<<maxi<<endl;

    return 0;
}
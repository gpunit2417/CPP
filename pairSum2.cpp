#include<iostream>
using namespace std;

bool pairSum(int arr[], int n, int k){
    int lo = 0;
    int high = n-1;
    while(lo < high){
        if(arr[lo] + arr[high] == k){
            cout<<lo<<" "<<high<<endl;
            return 1;
        }
        else if(arr[lo] + arr[high] > k){
            high--;
        }
        else{
            lo++;
        }
    }
    return 0;
}
// bool pairSum(int arr[], int n, int k){
//     for(int i=0; i<n-1; i++){
//         for(int j=i+1; j<n; j++){
//             if(arr[i] + arr[j] == k){
//                 cout<<i<<" "<<j<<endl;
//                 return 1;
//             }
//         }
//     }
//     return 0;
// }

int main(){
    int n = 8;
    int arr[8] = {2, 4, 7, 11, 14, 16, 20, 21};
    int k = 31;

    cout<<pairSum(arr, n, k)<<endl;
    return 0;
}
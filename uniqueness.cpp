#include<iostream>
using namespace std;

//single unique element 
// int unique(int arr[], int n){
//     int xorsum = 0;
//     for(int i=0; i<n; i++){
//         xorsum = xorsum ^ arr[i];
//     }
//     return xorsum;
// }
// int main(){
//     int arr[7] = {1,1,2,2,3,3,4};
//     cout<<unique(arr, 7);
//     return 0;
// }


//2 unique elements
// int setBits(int n, int pos){
//     return ((n & (1<<pos)) != 0);
// }

// void unique(int arr[], int n){
//     int xorsum = 0;
//     for(int i=0; i<n; i++){
//         xorsum = xorsum ^ arr[i];
//     }

//     int tempxor = xorsum;
//     int pos = 0;
//     int setbit = 0;
//     while(setbit != 1){
//         setbit = xorsum & 1;
//         pos++;
//         xorsum = xorsum >> 1;
//     }

//     int newxor = 0;
//     for(int i=0; i<n; i++){
//         if(setBits(arr[i], pos-1)){
//             newxor = newxor ^ arr[i];
//         }
//     }
//     cout<<newxor<<endl;
//     cout<<(tempxor ^ newxor)<<endl;
// }
// int main(){
//     int arr[8] = {1,2,3,1,2,3,5,7};
//     unique(arr, 8);
//     return 0;
// }


//single unique elements and other elements are thrice...
bool getBits(int n, int pos){
    return ((n & (1<<pos)) != 0);
}

int setBits(int n, int pos){
    return (n | (1<<pos));  
}

int unique(int arr[], int n){
    int result = 0;
    for(int i=0; i<64; i++){
        int sum=0;
        for(int j=0; j<n; j++){
            if(getBits(arr[j], i)){
                sum++;
            }
        }
        if(sum%3 != 0){
            result = setBits(result, i);
        }
    }

    return result;
}
int main(){
    int arr[] = {1,2,3,4,1,2,3,1,2,3};
    cout<<unique(arr, 10);
    return 0;
}
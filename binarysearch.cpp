#include<iostream>
using namespace std;
// int main(){
//     int i, arr[10], num, start, end, mid;
//     cout<<"Enter 10 Elements: ";
//     for(i=0; i<10; i++)
//         cin>>arr[i];
//     cout<<"Enter Element to be Search: ";
//     cin>>num;
//     start = 0;
//     end = 9;
//     mid = (start+end)/2;
//     while(start <= end){
//         if(arr[mid]<num)
//             start = mid+1;
//         else if(arr[mid]==num){
//             cout<<"number found at "<<mid;
//             break;
//         }
//         else
//             end = mid-1;
//             mid = (start+end)/2;
//     }
//     if(start>end)
//         cout<<"element not found";
//     cout<<endl;
//     return 0;
// }

//by babbar below code wihtout recursion
// int binarysearch(int arr[], int size, int key){
//     int start = 0;
//     int end = size - 1;
//     //int mid = (start + end)/2;
//     int mid = start + (end - start)/2;

//     while(start<=end){
//         if(arr[mid] == key){
//             return mid;
//         }
//         if(arr[mid]<key){
//             start = mid+1;
//         }
//         else{
//             end = mid-1;
//         }
//         // mid = (start+end)/2;
//         mid = start + (end - start)/2;
//     }
//     return -1;
// }

// int main(){
//     int even[6] = {2,4,6,8,12,18};
//     int odd[5] = {3,8,11,14,16};
//     int evenIndex = binarysearch(even, 6, 20);
//     cout<<"index of 20 is "<<evenIndex << endl;
    
//     int oddIndex = binarysearch(odd,5,8);
//     cout<<"index of 8 is "<<oddIndex << endl;

//     return 0;
// }

//by babbar with recursion
bool binary(int *arr, int s, int e, int k){
    //base case
    //if element not found
    if(s>e){
        return false;
    }
    int mid = s + (e-s)/2;

    //element found
    if(arr[mid] == k){
        return true;
    }
    if(arr[mid] < k){
        return binary(arr, mid+1, e, k);
    }
    else{
        return binary(arr, s, mid-1, k);
    }
}

int main(){
    int arr[6] = {54,34,77,23,88,22};
    int size = 6;
    int key = 66;
    cout<<"present or not "<<binary(arr, 0, 5, key)<<endl;

    return 0;
}
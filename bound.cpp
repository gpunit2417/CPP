#include<iostream>
using namespace std;

int firstOccurence(int arr[], int n, int key){
    int s = 0, e = n-1;
    int mid = s+(e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid] == key){
            ans = mid;
            e = mid-1;
        }
        else if(arr[mid] < key){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}
int lastOccurence(int arr[], int n, int key){
    int s = 0, e = n-1;
    int mid = s+(e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid] == key){
            ans = mid;
            s = mid+1;
        }
        else if(arr[mid] < key){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

int main(){
    int even[11] = { 1,2,3,3,3,3,3,3,3,5,5};
    cout<<"first occurence at "<<firstOccurence(even, 11, 3)<<endl;
    cout<<"last occurence at "<<lastOccurence(even, 11, 3)<< endl;

    return 0;
}
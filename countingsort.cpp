#include<iostream>
#include<stdlib.h>
using namespace std;

int maximum(int arr[], int n){
    int max = INT_MIN;
    for(int i=0; i<n; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    return max;
}

void countingSort(int arr[], int n){
    int i, j;
    int max = maximum(arr, n);
    int *count = (int *) malloc((max+1)*sizeof(int));
    for(i=0; i<max+1; i++){
        count[i] = 0;
    }
    for(i=0; i<n; i++){
        count[arr[i]] ++;
    }
    i=0;
    j=0;
    while(i<max+1){
        if(count[i]>0){
            arr[j] = i;
            count[i]--;
            j++;
        }
        else{
            i++;
        }
    }
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int size;
    cout<<"enter the size of the array "<<endl;
    cin>>size;
    int arr[size];

    cout<<"enter the elements of the array: "<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    cout<<"sorted array is: "<<endl;
    countingSort(arr, size);
    printArray(arr, size);
    return 0;
}
#include<iostream>
using namespace std;

void merge(int *arr, int s, int e){
    int mid = s + (e-s)/2;
    int len1= mid-s+1;
    int len2 = e-mid;

    int* first = new int[len1];
    int *second = new int[len2];

    //copy values
    int mainarr=s;
    for(int i=0; i<len1; i++){
        first[i] = arr[mainarr++];
    }

    mainarr = mid+1;
    for(int i = 0; i<len2; i++){
        second[i] = arr[mainarr++];
    }

    //merge arrays
    int index1 = 0;
    int index2 = 0;
    mainarr = s;

    while(index1<len1 && index2<len2){
        if(first[index1] < second[index2]){
            arr[mainarr++] = first[index1++];
        }
        else{
            arr[mainarr++] = second[index2++];
        }
    }

    while(index1 < len1){
        arr[mainarr++] = first[index1++];
    }
    while(index2 < len2){
        arr[mainarr++] = second[index2++];
    }
}

void mergesort(int *arr, int s, int e){
    if(s>=e){
        return;
    }
    int mid = s + (e-s)/2;

    //left part to be sorted
    mergesort(arr, s, mid);

    //right part to be sorted
    mergesort(arr, mid+1, e);

    //merge
    merge(arr, s, e);
}

int main(){
    int size;
    cout<<"enter the size "<<endl;
    cin>>size;
    int arr[size];
    cout<<"enter the array elements"<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    mergesort(arr, 0, size-1);
    cout<<"the sorted array is "<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
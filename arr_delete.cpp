#include<iostream>
using namespace std;
int main(){
    int arr[10], n=10, i, elem, j, found=0;
    cout<<"Enter 10 Array Elements: ";
    for(i=0; i<n; i++)
        cin>>arr[i];
    cout<<"Enter Element to Delete: ";
    cin>>elem;
    for(i=0; i<n; i++){
        if(arr[i]==elem){
            for(j=i; j<(n-1); j++)
                arr[j] = arr[j+1];
            found++;
            i--;
            n--;
        }
    }
    if(found==0)
        cout<<"Element not found";
    else
        cout<<"Element Deleted";
    cout<<endl;
#include<iostream>
using namespace std;
/*bool sorted(int arr[], int n){
    if(n==1){
        return true;
    }
    bool restArray= sorted(arr+1, n-1);
    return (arr[0]<arr[1] && restArray);
}
int main(){
    int arr[]={1,3,2,5,6};
    cout<<sorted(arr, 5);
    return 0;
}*/
/*void dec(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    dec(n-1);
}
int main(){
    int n;
    cin>>n;
    dec(n);
    return 0;
}*/

/*void inc(int n){
    if(n==0){
        return;
    }
    inc(n-1);
    cout<<n<<" ";
    
}
int main(){
    int n;
    cin>>n;
    inc(n);
    return 0;
}*/
/*int firstOcc(int arr[], int n, int i, int key){
    if(i==n){
        return -1;;
    }
    if(arr[i]==key){
        return i;
    }
    return firstOcc(arr, n, i+1, key);
}
int main(){
    int arr[]={4,2,1,2,5,2,7};
    cout<<firstOcc(arr,7,0,2)<<endl;
    return 0;
}*/
/*int lastOcc(int arr[], int n, int i, int key){
    if(i==n){
        return -1;
    }
    int restArray=lastOcc(arr, n, i+1, key);
    if(restArray!=-1){
        return restArray;
    }
    if(arr[i]==key){
        return i;
    }
    return -1;
    //return lastOcc(arr, n, i+1, key);
}
int main(){
    int arr[]={4,2,1,2,5,2,7};
    cout<<lastOcc(arr,7,0,2)<<endl;
    return 0;
}*/
#include<iostream>
using namespace std;
void reverse(int arr[], int n){
    int first = 0;
    int last = n-1;
    while(first<=last){
        int temp = arr[first];
        arr[first] = arr[last];
        arr[last] = temp;
        first++;
        last--;
    }
}

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[] = {2,5,3,6,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << "reversed array is " << endl;
    reverse(arr, size);
    print(arr, size);

    return 0;
}
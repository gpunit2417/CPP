#include<iostream>
using namespace std;
int main(){
    int arr[5];
    for(int i=0; i<5; i++){        //input from the user
        cin>>arr[i];
    }
    cout<<"Elements are:"<<endl;
    for(int i=0; i<5; i++){        //printing the array elements
        cout<<arr[i]<<endl;
    }
    return 0;
}

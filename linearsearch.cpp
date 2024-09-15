#include<iostream>
using namespace std;
// int main(){
//     int arr[10], i, num, index;
//     cout<<"Enter 10 Numbers: ";
//     for(i=0; i<10; i++){
//         cin>>arr[i];
//     }
//     cout<<"Enter a Number to Search: ";
//     cin>>num;
//     for(i=0; i<10; i++){
//         if(arr[i]==num){
//             index = i;
//             break;
//         }
//     }
//     cout<<"Found at Index No."<<index;
//     cout<<endl;
//     return 0;
// }


//by babbar below code without recursion
// bool search(int arr[], int size, int key){
//     for(int i = 0; i<size; i++){
//         if(arr[i] == key){
//             return 1;
//         }
//     }
//     return 0;
// }
// int main(){
//     int arr[10] = {1,4,2,-1,5,6,7,9,8,3};
//     cout<<"enter the element to search "<<endl;
//     int key;
//     cin>>key;

//     bool found = search(arr, 10, key);

//     if(found){
//         cout<<"element is present"<<endl;
//     }
//     else{
//         cout<<"element not found"<<endl;
//     }
//     return 0;
// }

//by babbar with recursion
void print(int arr[], int n){
    cout<<"size is "<<n<<endl;

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

bool linear(int arr[], int size, int k){
    //print(arr, size);
    if(size == 0){
        return false;
    }
    if(arr[0] == k){
        return true;
    }
    else{
        bool remainingPart = linear(arr+1, size-1, k);
        return remainingPart;
    }
}

int main(){
    int arr[5] = {3,6,9,56,34};
    int size = 5;
    int key = 56;
    bool ans = linear(arr, size, key);
    if(ans){
        cout<<"present "<<endl;
    }
    else{
        cout<<"not present "<<endl;
    }


    return 0;
}
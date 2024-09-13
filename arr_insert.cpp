#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    int i;
    for(i = 0; i < n; i++){
        cin >> arr[i];
    }
    int pos, ele;
    cin >> pos>> ele;
    if(pos > n){
        cout <<"invalid"<<endl;
    }
    else{
    for (i = n-1; i >= pos-1; i--)
        arr[i+1] = arr[i];
        arr[pos-1] = ele;
        cout << "Array after insertion is: "<<endl;
    for (i = 0; i <= n; i++)
        cout << arr[i] <<" ";
    }
    return 0;
}
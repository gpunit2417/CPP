#include<iostream>
using namespace std;
// void reverse(int arr[], int n){
//     int start = 0;
//     int end = n - 1;

//     while(start<= end){
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
// }

// void printArray(int arr[], int n){
//     for(int i = 0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// int main(){
//     int arr[6] = {1,2,6,4,7,3};
//     int brr[5] = {2,6,3,9,5};

//     reverse(arr, 6);
//     reverse(brr, 5);

//     printArray(arr, 6);
//     printArray(brr, 5);

//     return 0;
// }

//by babbar
// #include<vector>
// vector<int> reverse(vector<int> v){
//     int s = 0, e = v.size()-1;
//     while(s<=e){
//         swap(v[s], v[e]);
//         s++;
//         e--;
//     }
//     return v;
// }

// void print(vector<int> v){
//     for(int i=0; i<v.size(); i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
// }

// int main(){
//     vector<int> v;
//     v.push_back(11);
//     v.push_back(7);
//     v.push_back(3);
//     v.push_back(12);
//     v.push_back(4);

//     vector<int> ans = reverse(v);
//     cout<<"printing the array "<<endl;
//     print(ans);

//     return 0;
// }

//code studio
void reverseArray(vector<int> &arr, int n){
    int s = n+1, e=arr.size()-1;

    while(s<=e){
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}
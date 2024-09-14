#include<bits/stdc++.h>
using namespace std;

int main(){

    //char array printing
    // int i=0;
    // char arr[100] = "punit";
    // while(arr[i] != '\0'){
    //     cout<<arr[i]<<" ";
    //     i++;
    // }


    //char array input and print
    // char arr[100];
    // cin>>arr;

    // cout<<arr<<endl;
    // cout<<arr[2];

    //check palindrome
    // int n;
    // cout<<"array size"<<endl;
    // cin>>n;

    // char arr[n+1];
    // cin>>arr;

    // bool check = true;
    // for(int i=0; i<n; i++){
    //     if(arr[i] != arr[n-1-i]){
    //         check = 0;
    //         break;
    //     }
    // }

    // if(check){
    //     cout<<"palindrome";
    // }
    // else{
    //     cout<<"not palindrome";
    // }


    //largest word in a sentence
    int n;
    cout<<"no of characters"<<endl;
    cin>>n;
    cin.ignore();

    char arr[n+1];
    cin.getline(arr, n+1);
    cin.ignore();

    int i=0;
    int currlen= 0;
    int maxlen=0;
    int st=0;
    int maxst=0;

    
    while(1){
        if(arr[i] == ' ' || arr[i] == '\0'){
            if(currlen > maxlen){
                maxlen = currlen;
                maxst = st;
            }
            currlen = 0;
            st = i+1;
        }
        else{
            currlen++;
        }
        if(arr[i] == '\0'){
            break;
        }
        i++;
    }
    cout<<maxlen<<endl;
    for(int i=0; i<maxlen; i++){
        cout<<arr[i+maxst];
    }

    return 0;
}
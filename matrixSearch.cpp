#include<iostream>
using namespace std;

int main(){
    int n;
    int m;
    int ele;
    bool found = false;
    cout<<"dimensions?"<<endl;
    cin>>n>>m>>ele;

    int a[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }

    int r=0;
    int c=m-1;
    while(r<n && c>=0){
        if(a[r][c] == ele){
            found = true;
            break;
        }
        else if(a[r][c] > ele){
            c--;
        }
        else{
            r++;
        }
    }
    if(found){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;


int primeSieve(int n){
    int prime[100] = {0};

    for(int i=2; i<n; i++){
        if(prime[i] == 0){
            for(int j=i*i; j<=n; j += i){
                prime[j] = 1;
            }
        }
    }

    for(int i=2; i<=n; i++){
        if(prime[i] == 0){cout<<i<<" ";}
    }
}
int main(){
    int n;
    cin>>n;

    primeSieve(n);

    return 0;
}
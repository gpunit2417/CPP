#include<iostream>
using namespace std;

// n&n-1 has the same bits as n except the rightmost set(1) bits
bool powerof2(int n){
    return (n && !(n & n-1));
}
int main(){
    cout<<powerof2(126)<<endl;
    return 0;
}
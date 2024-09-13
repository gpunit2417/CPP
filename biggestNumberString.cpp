#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
    string str = "34324553";
    //greater<int> sorts the string in reverse order.
    sort(str.begin(), str.end(), greater<int>());
    cout<<str<<endl;

    return 0;
}
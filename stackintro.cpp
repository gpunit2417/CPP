#include<iostream>
using namespace std;
#include<stack>
int main(){
    stack<int> s;
    s.push(2);
    s.push(3);

    s.pop();

    cout<<"top "<<s.top()<<endl;
    if(s.empty()){
        cout<<"empty "<<endl;
    }
    else{
        cout<<"not empty "<<endl;
    }
    return 0;
}
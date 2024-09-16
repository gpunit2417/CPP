#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int>q;
    q.push(1);
    q.push(23);
    q.push(34);
    cout<<q.size()<<endl;
    q.pop();
    cout<<q.size()<<endl;  
    if(q.empty()){
        cout<<"queue is empty"<<endl;
    }
    else{
        cout<<"queue is not empty"<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;
class A{
    public:
    void sayhello(){
        cout<<"hello ji "<<endl;
    }

    int sayhello(string name, int n){
        cout<<" namaskar sahab "<<endl;
        return n;
    }

    void sayhello(string name){
        cout<<"hello "<<name<<endl;
    }
};

int main(){
    A obj;
    obj.sayhello();
    return 0;
}
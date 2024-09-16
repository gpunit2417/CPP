#include<iostream>
using namespace std;
void print(int *p){
    cout<<*p<<endl;
}

void update(int *p){
    //p = p+1;
    //cout<<"inside "<<p<<endl;
    *p = *p + 1;
}

int main(){
    int value = 5;
    int *p = &value;
    cout<<"before "<<*p <<endl;
    cout<<"** "<<p<<endl;
    update(p);
    cout<<"after "<<*p<<endl;
    cout<<"*** "<<p<<endl;

    return 0;
}
#include<iostream>
using namespace std;

class Employee{
    public:
    void call(int a, int b, int c){
        cout<<"code1"<<endl;
    }
    void call(int a, float b, int c){
        cout<<"code1"<<endl;
    }
    void call(int a, char b, int c){
        cout<<"code1"<<endl;
    }
    void call(float a, float b, int c){
        cout<<"code1"<<endl;
    }
};

int main(){
    Employee e1;
    e1.call(1.2, 5, 2.4);
    return 0;
}
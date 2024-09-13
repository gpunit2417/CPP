//code studio
#include<iostream>
using namespace std;
class Parent{
    public:
    void show(){
        cout<<"parent "<<endl;
    }
};
class subclass: public Parent{
    public:
    void show(){
        cout<<"subclass "<<endl;
    }
};

class sub: public Parent{
    public:
    void show(){
        cout<<"sub "<<endl;
    }
};

int main(){
    subclass object;
    sub obj;
    object.show();
    obj.show();
    return 0;
}
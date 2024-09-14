#include<iostream>
using namespace std;
class a{
    public:
    void func1(){
        cout<<"first "<<endl;
    }
};

class b: public a{
    public:
    void func2(){
        cout<<"second "<<endl;
    }
};

class c: public a{
    public:
    void func3(){
        cout<<"third "<<endl;
    }
};

int main(){
    a object;
    object.func1();

    b obj;
    obj.func1();
    obj.func2();

    c ob;
    ob.func1();
    ob.func3();

    return 0;
}
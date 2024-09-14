#include<iostream>
using namespace std;
class Student{
    private:
    string name;
    int age;
    int height;

    public:
    int getage(){
        return this->age;
    }
};

int main(){
    Student first;
    cout<<"ok "<<endl;

    return 0;
}
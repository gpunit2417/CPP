#include<iostream>
using namespace std;
class Human{
    public:
    int height;
    int weight;
    int age;

    public:
    int getage(){
        return this->age;
    }
    int setweight(int w){
        this->weight = w;
    }
};

class male: public Human{
    public:
    string color;
    void sleep(){
        cout<< " sleep "<< endl;
    }
};

int main(){
    male object;
    cout<< object.age<<endl;
    cout<<object.height<<endl;
    cout<<object.weight<<endl;

    cout<<object.color <<endl;

    object.setweight(50);
    cout<<object.weight<<endl;
    object.sleep();

    return 0;
}
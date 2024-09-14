#include<iostream>
using namespace std;
class Hero{
    //properties
    public:
    int health;

    // private:
    public:
    char level;

    Hero(){
        cout<<"constructor "<<endl;
    }
    Hero(int health){
        this->health = health;
    }
    Hero(int health, char level){
        this->level = level;
        this->health = health;
    }

    void print(){
        cout<< level<< endl;
    }

    int getHealth(){
        return health;
    }
    int getLevel(){
        return level;
    }
    void setHealth(int h){
        health = h;
    }
    void setLevel(char ch){
        level = ch;
    }
};

int main(){
    //create object
    // Hero ram;
    // cout<< "health is "<<ram.health<<endl;
    // cout<< "level is "<<ram.level<<endl;
    Hero ram(10);
    cout<<"address is "<< &ram<<endl;
    ram.getHealth();

    return 0;
}
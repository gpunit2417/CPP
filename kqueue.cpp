#include<iostream>
using namespace std;
class kqueue{
    public:
    int n,k,*front;
    int *rear;
    int *arr;
    int freespot;
    int *next;

    public:
    kqueue(int n, int k){
        this->n=n;
        this->k= k;
        front = new int[k];
        rear = new int[k];
        for(int i=0; i<k; i++){
            front[i] = -1;
            rear[i] = -1;
        }
        next = new int[n];
        for(int i=0; i<n; i++){
            next[i]= i+1;
        }
        next[n-1] = -1;
        arr = new int[n];
        freespot = 0;
    }

    void enqueue(int data, int qn){
        if(freespot == -1){
            cout<<"overflow"<<endl;
            return;
        }

        int index = freespot;
        freespot = next[index];

        if(front[qn-1]== -1){
            front[qn-1]= index;
        }
        else{
            next[rear[qn-1]] = index;
        }

        next[index] = -1;    //update next

        rear[qn-1] = index; //update rear

        arr[index] = data; //update element
    }
    int dequeue(int qn){
        if(front[qn-1] == -1){
            cout<<"underflow"<<endl;
            return -1;
        }

        int index = front[qn-1];  //find index to pop

        front[qn-1] = next[index]; //front ko aage bdhao

        next[index] = freespot;  //freespot ko manage kro
        freespot = index;
        return arr[index];
    }
};
int main(){
    kqueue q(10,3);
    q.enqueue(10,1);
    q.enqueue(15,1);
    q.enqueue(20,2);
    q.enqueue(25,1);

    cout<<q.dequeue(1)<<endl;
    cout<<q.dequeue(2)<<endl;
    cout<<q.dequeue(1)<<endl;
    cout<<q.dequeue(1)<<endl;

    cout<<q.dequeue(1)<<endl;

    return 0; 
}
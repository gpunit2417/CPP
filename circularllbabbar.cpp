#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
    ~Node(){
        int val = this->data;
        if(this->next != NULL){
            delete next;
            this-> next = NULL;
        }
    }
};
void insertAtHead(Node* &tail, int element, int d){
    //empty list        //head = tail;
    if(tail == NULL){
        Node* newnode = new Node(d);
        tail = newnode;
        newnode->next = newnode;
    }
    else{
        //non empty list
        Node* curr = tail;
        while(curr->data != element){
            curr = curr->next;
        }


        Node* temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void print(Node* tail){
    Node* temp = tail;
    if(tail == NULL){
        cout<<"list is empty..."<<endl;
        return;
    }
    do{
        cout<<tail->data<<" ";
        tail = tail->next;
    }while(tail!=temp);
    cout<<endl;
}

void deleteNode(Node* &tail, int value){
    if(tail == NULL){
        cout<<"empty list it is..."<<endl;
        return;
    }
    else{
        Node* prev=tail;
        Node* curr= prev->next;
        while(curr->data!=value){
            prev= curr;
            curr=curr->next;
        }
        prev->next = curr->next;
        if(curr == prev){
            tail = NULL;
        }
        else if(tail == curr){
            tail = prev;
        }
        curr->next= NULL;
        delete curr;
    }
}

int main(){
    Node* tail = NULL;
    insertAtHead(tail, 5, 3);
    print(tail);
    insertAtHead(tail, 3, 5);
    print(tail);
    insertAtHead(tail, 5, 7);
    print(tail);
    insertAtHead(tail, 5, 9);
    print(tail);

    deleteNode(tail, 3);
    print(tail);
    deleteNode(tail, 8);
    print(tail);
    return 0;
}
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node *prev;
    //constructor
    Node(int d){
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node(){
        int val = this->data;
        while(next!=NULL){
            delete next;
            next = NULL;
        }
    }
};

void print(Node *head){
    Node *temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int getLength(Node *head){
    int len = 0;
    Node* temp = head;
    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    return len;
}

void insertAtHead(Node* &head,Node* &tail, int d){
    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
        Node* temp = new Node(d);
        temp->next = head;
        head -> prev = temp;
        head = temp;
    }
}

void insertAtTail(Node* &tail,Node* &head, int d){
    if(tail == NULL){
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else{
        Node* temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insertAtPosition(Node* &tail, Node* &head, int position, int d){
    if(position == 1)
    {
        insertAtHead(head, tail, d);
        return;
    }
    Node* temp = head;
    int cnt = 1;
    while(cnt<position-1){
        temp = temp->next;
        cnt++;
    }
    if(temp->next == NULL){
        insertAtTail(tail, head, d);
        return;
    }

    Node* nodetoinsert = new Node(d);
    nodetoinsert->next = temp->next;
    temp->next->prev = nodetoinsert;
    temp->next = nodetoinsert;
    nodetoinsert->prev = temp;
}

void deleteNode(int position, Node* &head){
    if(position==1){
        Node* temp=head;
        temp->next->prev = NULL;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        Node* curr= head;
        Node* prev=NULL;
        int cnt = 1;
        while(cnt<position){
            prev= curr;
            curr=curr->next;
            cnt++;
        }
        curr->next = NULL;
        prev->next = curr->next;
        curr->next= NULL;
        delete curr;
    }
}

int main(){
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;

    print(head);
    cout<<"the length is "<<getLength(head)<<endl;

    insertAtHead(head, tail, 12);
    print(head);
    insertAtHead(head, tail, 14);
    print(head);
    insertAtHead(head, tail, 18);
    print(head);

    insertAtTail(tail, head, 23);
    print(head);
    insertAtTail(tail, head, 34);
    print(head);

    insertAtPosition(tail, head, 2, 54);
    print(head);

    deleteNode(1, head);
    print(head);
    return 0;
}
//code studio
// Node* sortList(Node *head){
//     int zero=0;
//     int one = 0;
//     int two = 0;
//     Node *temp = head; 
//     while(temp!=NULL){
//         if(temp->data == 0){
//             zero++;
//         }
//         else if(temp->data == 1){
//             one++;
//         }
//         else{
//             two++;
//         }
//         temp = temp->next;
//     }

//     temp = head;
//     while(temp!=NULL){
//         if(zero != 0){
//             temp->data = 0;
//             zero--;
//         }
//         else if(one != 0){
//             temp->data = 1;
//             one--;
//         }
//         else if(two != 0){
//             temp->data = 2; 
//             two--;
//         }
//         temp = temp->next;
//     }
//     return head;
// }

//code studio
void insertAtTail(Node* &tail, Node* curr){
    tail->next = curr;
    tail = curr;
}

Node *sortList(Node *head){
    Node *zeroHead = new Node(-1);
    Node *zeroTail = zeroHead;
    Node *oneHead = new Node(-1);
    Node *oneTail = oneHead;
    Node *twoHead = new Node(-1);
    Node *twoTail = twoHead;

    Node *curr = head;

    //create sublists of 0,1,2
    while(curr ! = NULL){
        int value = curr->data;
        if(value == 0){
            insertAtTail(zeroTail, curr);
        }
        else if(value == 1){
            insertAtTail(oneTail, curr);
        }
        else if(value == 2){
            insertAtTail(twoTail, curr);
        }
        curr = curr->next;
    }

    //merge 3 sublist
    //1s list not empty
    if(oneHead->next != NULL){
        zeroTail -> next = oneHead-> next;
    }
    else{
        //1s list empty
        zeroTail -> next = twoHead->next;
    }

    oneTail->next = twoHead->next;
    twoTail->next = NULL;

    //setup head
    head = zeroHead->next;

    //delete dummy nodes
    delete zeroHead;
    delete oneHead;
    delete twoHead;

    return head;
}
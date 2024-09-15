//code studio
// Node *kReverse(Node *head, int k){
//     //base call
//     if(head == NULL){
//         return NULL;
//     }
//     //reverse first k nodes
//     Node *next = NULL;
//     Node *curr = head;
//     Node *prev = NULL;
//     int count = 0;

//     while(curr != NULL && count <k){
//         next = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = next;
//     }
//     //recursion
//     if(next != NULL){
//         head -> next = kReverse(next, k);
//     }
//     return prev;
// }
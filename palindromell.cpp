//gfg
// #include<vector>
// class Solution{
//     private:
//     bool checkPalindrome(vector<int> arr){
//         int n = arr.size();
//         int s = 0;
//         int e = n-1;

//         while(s<=e){
//             if(arr[s] != arr[e]){
//                 return 0;
//             }
//             s++;
//             e--;
//         }
//         return 1;
//     }
//     public:
//     bool isPalindrome(Node *head){
//         vector<int> arr;
//         Node *temp = head;
//         while(temp != NULL){
//             arr.push_back(temp->data);
//             temp = temp->next;
//         }
//         return checkPalindrome(arr);
//     }
// };

//gfg 
// class Solution{
//     private:
//     Node * getMid(Node *head){
//         Node *slow = head;
//         Node *fast = head -> next;

//         while(fast != NULL && fast->next != NULL){
//             fast = fast->next->next;
//             slow = slow->next;
//         }
//         return slow;
//     }
//     Node* reverse(Node* head){
//         Node *curr = head;
//         Node *prev = NULL;
//         Node *next = NULL;

//         while(curr!=NULL){
//             next = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = next;
//         }
//         return prev;
//     }
//     public:
//     bool isPalindrome(Node *head){
//         if(head-> next == NULL){
//             return true;
//         }
//         //find mid
//         Node* mid = getMid(head);
//         //reverse list
//         Node *temp = mid->next;     
//         mid->next = reverse(temp);
//         //compare both halves
//         Node *head1 = head;
//         Node *head2 = mid->next;
//         while(head2 ! = NULL){
//             if(head1->data != head2->data){
//                 return false;
//             }
//             head1 = head1->next;
//             head2 = head2->next;
//         }

//         //repeat step 2
//         temp = mid->next;
//         mid->next = reverse(temp);

//         return true;
//     }
// };
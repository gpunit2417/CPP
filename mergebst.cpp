//code studio
// void inorder(TreeNode<int>* root, vector<int> &in){
//     if(root == NULL){
//         return;
//     }
//     inorder(root->left, in);
//     in.push_back(root->data;
//     inorder(root->right, in);)
// }

// vector<int> mergeArrays(vector<int> a, vector<int> b){
//     vector<int> ans(a.size() + b.size());
//     int i=0;
//     int j=0;
//     int k=0;
//     while(i<a.size() && j<b.size()){
//         if(a[i] < b[j]){
//             ans[k++] = a[i];
//             i++;
//         }
//         else{
//             ans[k++] = b[j];
//             j++;
//         }
//     }
//     while(i<a.size()){
//         ans[k++] = a[i];
//         i++;
//     }

//     while(j<b.size()){
//         ans[k++] = b[j];
//         j++;
//     }
//     return ans;
// }

// TreeNode<int>*inordertoBST(int s , int e, vector<int> &in){
//     if(s>e){
//         return NULL;
//     }
//     int mid =(s+e)/2;
//     TreeNode<int>* root = new TreeNode<int>(in[mid]);
//     root->left= inordertoBST(0, mid-1, in);
//     root->right= inordertoBST(mid+1, e, in);
//     return root;
// }

// TreeNode<int>* mergeBST(TreeNode<int>* root1, vector<int>* root2){
//     vector<int>bst1, bst2;
//     inorder(root1, bst1);
//     inorder(root2, bst2);

//     vector<int> mergeArray = mergeArrays(bst1, bst2);
//     int s=0; 
//     int e = mergeArray.size()-1;
//     return inordertoBST(s, e, mergeArray);
// }
//t.c. o(n)
//s.c o(m+n)

//t.c o(n)
//s.c o(h1+h2)
void inorder(TreeNode<int>* root, vector<int> &in){
    if(root == NULL){
        return;
    }
    inorder(root->left, in);
    in.push_back(root->data;
    inorder(root->right, in);)
}

vector<int> mergeArrays(vector<int> a, vector<int> b){
    vector<int> ans(a.size() + b.size());
    int i=0;
    int j=0;
    int k=0;
    while(i<a.size() && j<b.size()){
        if(a[i] < b[j]){
            ans[k++] = a[i];
            i++;
        }
        else{
            ans[k++] = b[j];
            j++;
        }
    }
    while(i<a.size()){
        ans[k++] = a[i];
        i++;
    }

    while(j<b.size()){
        ans[k++] = b[j];
        j++;
    }
    return ans;
}

TreeNode<int>*inordertoBST(int s , int e, vector<int> &in){
    if(s>e){
        return NULL;
    }
    int mid =(s+e)/2;
    TreeNode<int>* root = new TreeNode<int>(in[mid]);
    root->left= inordertoBST(0, mid-1, in);
    root->right= inordertoBST(mid+1, e, in);
    return root;
}

void convertToSortedDLL(TreeNode<int>* root, TreeNode<int>* head){
    if(root == NULL){
        return ;
    }
    convertToSortedDLL(root->right, head);
    root->right = head;
    if(head!=NULL){
        head->left = root;
    }
    head = root;
    convertToSortedDLL(root->left, head);
}

TreeNode<int>* mergeLL(TreeNode<int>* head1, TreeNode<int>* head2){
    TreeNode<int>* head = NULL;
    TreeNode<int>* tail = NULL;
    while(head1 != NULL && head2 != NULL){
        if(head1->data < head2->data){
            if(head == NULL){
                head = head1;
                tail = head1;
                head1 = head1->right;
            }
            else{
                tail->right = head1;
                head1->left = tail;
                tail = head1;
                head1 = head1->right;
            }
        }
        else{
            if(head == NULL){
                head = head2;
                tail = head2;
                head2 = head2->right;
            }
            else{
                tail->right = head2;
                head2->left = tail;
                tail = head2;
                head2 = head2->right;
            }
        }
    }
    while(head1 != NULL){
        tail->right = head1;
        head1->left = tail;
        tail = head1;
        head1 = head1->right;
    }
    while(head2 != NULL){
        tail->right = head2;
        head2->left = tail;
        tail = head2;
        head2 = head2->right;
    }
    return head;
}

int countNodes(TreeNode<int> *head){
    if(root == NULL){
        return NULL;
    }
    int len = 0;
    TreeNode<int> *temp = head;
    while(temp != NULL){
        len++;
        temp = temp->right;
    }
    return len;
}
TreeNode<int>* sortedLLToBST(TreeNode<int> *head, int n){
    if(n<=0 || head == NULL){
        return NULL;
    }
    TreeNode<int> *left = sortedLLToBST(head, n/2);
    TreeNode<int> *root = head;
    root->left = left;
    head = head->right;
    root->right = sortedLLToBST(head, n-n/2-1);
    return root;
}
TreeNode<int>* mergeBST(TreeNode<int>* root1, vector<int>* root2){
    // vector<int>bst1, bst2;
    // inorder(root1, bst1);
    // inorder(root2, bst2);

    // vector<int> mergeArray = mergeArrays(bst1, bst2);
    // int s=0; 
    // int e = mergeArray.size()-1;
    // return inordertoBST(s, e, mergeArray);
    TreeNode<int>* head1 = NULL;
    convertToSortedDLL(root1, head1);
    head1->left = NULL;

    TreeNode<int>* head2 = NULL;
    convertToSortedDLL(root2, head2);
    head2->left = NULL;
    
    TreeNode<int>* root = mergeLL(head1, head2);
    return sortedLLToBST(head, countNodes(head));
}
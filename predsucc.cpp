//code studio
pair<int, int>predecessorSuccessor(BinaryTreeNode<int> *root, int key){
    int pred = -1;
    int succ = -1;

    BinaryTreeNode<int>* temp = root;
    while(temp->data != key){
        if(temp->data>key){
            succ = temp->data;
            temp = temp->left;
        }
        else{
            pred = temp->data;
            temp= temp->right;
        }
    }

    //pred
    BinaryTreeNode<int>* leftTree = temp->left;
    while(leftTree!=NULL){
        pred = leftTree->left;
        leftTree = leftTree->right;
    }

    //succ
    BinaryTreeNode<int>* rightTree = temp->right;
    while(rightTree!=NULL){
        succ = rightTree->right;
        rightTree = rightTree->left;
    }

    pair<int, int> ans = make_pair(pred, succ);
    return ans;
}
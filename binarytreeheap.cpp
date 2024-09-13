//gfg
class Solution{
    public:
    int countnodes(struct Node* root){
        if(root == NULL){
            return 0;
        }
        int ans = 1 + countnodes(root->left) + countnodes(root->right);
        return ans;
    }

    bool isCBT(struct Node* root, int index, int cnt){
        if(root == NULL){
            return true;
        }
        if(index>=cnt){
            return false;
        }
        else{
            bool left = isCBT(root->left, 2*index +1, cnt);
            bool right = isCBT(root->right, 2*index + 2, cnt);
            return (left && right);
        }
    }

    bool isMaxorder(struct Node* root){
        if(root->left == NULL && root->right == NULL){
            return true;
        }
        if(root->right == NULL){
            return (root->right > root->left->data);
        }
        else{
            bool left = isMaxorder(root->left);
            bool right = isMaxorder(root->right);
            return(left && right && root->data > root->left->data && root->data > root->right->data);
        }
    }

    bool isHeap(struct Node* tree){
        int index = 0;
        int count = countnodes(tree);
        if(isCBT(tree, index, count) && isMaxorder(tree)){
            return true;
        }
        else{
            return false;
        }
    }
};
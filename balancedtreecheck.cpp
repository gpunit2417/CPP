// class solution{
//     private:
//     int height(struct Node* node){
//         if(node == NULL){
//             return 0;
//         }

//         int left = height(node->left);
//         int right = height(node->right);

//         int ans = max(left, right) + 1;
//         return ans;
//     }
//     public:
//     bool isBalance(Node* root){
//         if(root == NULL){
//             return true;
//         }
//         bool left = isBalance(root->left);
//         bool right = isBalance(root->right);

//         bool diff= abs(height(root->left) - height(root->right) <= 1);

//         if(left && right && diff){
//             return 1;
//         }
//         else{
//             return false; 
//         }
//     }
// }
//t.c o(n*2)

//gfg 
class solution{
    public:
    pair<bool, int> isBalanceFast(Node* root){
        if(root == NULL){
            pair<bool, int> p = make_pair(0, 0);
            return p;
        }

        pair<int, int> left = isBalanceFast(root->left);
        pair<int, int> right = isBalanceFast(root->right);

        bool leftAns = left.first;
        bool rightAns = right.first;

        bool diff= abs(left.second - right.second <= 1);

        pair<bool, int> ans;
        ans.second = max(left.second, right.second) + 1;

        if(leftAns && rightAns && diff){
            ans.first = true;
        }
        else{
            ans.first = false; 
        }
        return ans;
    }
    bool isBalance(Node* root){
        return isBalanceFast(root).first;
    }
}
//t.c o(n)


//another one gfg solution
class Solution{
   public:
    int height(struct Node* node){
        if(node == NULL){
            return 0;
        }

        int left = height(node->left);
        int right = height(node->right);

        int ans = max(left, right) + 1;
        return ans;
    }
    
 
    bool isBalanced(Node* root){
        if(root==NULL) return true;
        int lh=height(root->left);
        int rh=height(root->right);
        if(abs(lh-rh)<=1 && isBalanced(root->left) && isBalanced(root->right)) return true;
        else return false;
    }
};
//code studio
// void inorder(BinaryTreeNodes<int>*root, int &count){
//     if(root == NULL){
//         return;
//     }
    
//     inorder(root->left, count);
//     if(root->left == NULL && root->right == NULL){
//         count++;
//     }
//     inorder(root->right, count);
// }
// int noOfLeafNodes(BinaryTreeNodes<int>*root){
//     int cnt = 0;
//     inorder(root, cnt);
//     return cnt;
// }
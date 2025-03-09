//gfg
// class Solution{
//     public:
//     int findPosition(int in[], int element, int n){
//         for(int i = 0; i<n; i++){
//             if(in[i] == element){
//                 return i;
//             }
//         }
//         return -1;
//     }

//     Node* solve(int in[], int pre[], int &index, int instart, int inend, int n){
//         if(index >= n || instart>inend){
//             return NULL;
//         }

//         int element = pre[index++];
//         Node *root = new Node(element);
//         int position = findPosition(in, element, n);

//         //recursive calls
//         root->left = solve(in, pre, index, instart, position-1, n);
//         root->right = solve(in, pre, index, position+1, inend, n);

//         return root;
//     }

//     Node* buildTree(int in[], int pre[], int n){
//         int preindex = 0; 
//         Node* ans = solve(in, pre, preindex, 0, n-1, n);
//         return ans;
//     }
// };


// class Solution{
//     public:
//     void mapp(int in[], map<int, int> &nodetoindex, int n){
//         for(int i = 0; i<n; i++){
//             nodetoindex[in[i]] = -1;
//         }
//     }

//     Node* solve(int in[], int pre[], int &index, int instart, int inend, int n, mapp<int, int> &nodetoindex){
//         if(index >= n || instart>inend){
//             return NULL;
//         }

//         int element = pre[index++];
//         Node *root = new Node(element);
//         int position = nodetoindex[element];

//         //recursive calls
//         root->left = solve(in, pre, index, instart, position-1, n, nodetoindex);
//         root->right = solve(in, pre, index, position+1, inend, n, nodetoindex);

//         return root;
//     }

//     Node* buildTree(int in[], int pre[], int n){
//         int preindex = 0; 
//         map<int,int> nodetoindex;
//         mapp(in, nodetoindex, n);
//         Node* ans = solve(in, pre, preindex, 0, n-1, n, nodetoindex);
//         return ans;
//     }
// };

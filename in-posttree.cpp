//gfg
class Solution{
    public:
    void mapp(int in[], map<int, int> &nodetoindex, int n){
        for(int i = 0; i<n; i++){
            nodetoindex[in[i]] = -1;
        }
    }

    Node* solve(int in[], int post[], int &index, int instart, int inend, int n, mapp<int, int> &nodetoindex){
        if(index < 0 || instart > inend){
            return NULL;
        }

        int element = post[index--];
        Node *root = new Node(element);
        int position = nodetoindex[element];

        //recursive calls
        root->right = solve(in, post, index, position+1, inend, n, nodetoindex);
        root->left = solve(in, post, index, instart, position-1, n, nodetoindex);

        return root;
    }

    Node* buildTree(int in[], int post[], int n){
        int postindex = 0; 
        map<int,int> nodetoindex;
        mapp(in, nodetoindex, n);
        Node* ans = solve(in, post, postindex, 0, n-1, n, nodetoindex);
        return ans;
    }
};

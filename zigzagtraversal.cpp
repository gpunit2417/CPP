//gfg
class solution{
    public:
    //function to store zig zag traversal of tree
    vector<int> zigZagTraversal(Node* root){
        vector<int> result;
        if(root == NULL){
            return result;
        }
        queue<Node*> q;
        q.push(root);

        bool leftToRight = true;

        while(!q.empty()){
            int size = q.size();
            vector<int> ans(size);

            //level process
            for(int i=0; i<size; i++){
                Node* frontNode = q.front();
                q.pop();

                int index = leftToRight ? i : size - i - 1;
                ans[index] = frontNode -> data;

                if(frontNode->left){
                    q.push(frontNode->left);
                }
                if(frontNode->right){
                    q.push(frontNode->right);
                } 
            }
            //direction change
            leftToRight = !leftToRight;
            for(auto i : ans){
                result.push_back(i);
            }
        }
        return result;
    }
};
//t.c. o(n)
//s.c. o(n)
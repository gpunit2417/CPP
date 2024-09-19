//gfg
class Solution{
    public:
    vector<int> Verticalorder(Node *root){
        map<int, map<int, vector<int> > > nodes;
        queue<pair<Node*, pair<int, int>>> q;
        vector<int> ans;

        if(root == NULL){
            return ans;
        }
        q.push(make_pair(root, make_pair(0,0)));
        while(!q.empty()){
            pair<Node*, pair<int, int>> temp = q.front();
            q.pop();
            Node* firstNode = temp.first;
            int hd = temp.second.first;
            int level = temp.second.second;
            nodes[hd][level].push_back(firstNode->data);

            if(firstNode->left){
                q.push(make_pair(firstNode->left, make_pair(hd-1, level+1)));
            }
            if(firstNode->right){
                q.push(make_pair(firstNode->right, make_pair(hd-1, level+1)));
            }
        }
        for(auto i:nodes){
            for(auto j:i.second){
                for(auto k:j.second){
                    ans.push_back(j);
                }
            }
        }
        return ans;
    }
};
//code studio
bool isSafe(int newx, int newy, vector<vector<bool> > &vis, vector<vector<int> > &arr, int n){
    if((newx >=0 && newx<n) && (newy>=0 && newy < n) && vis[newx][newy] !=1 && arr[newx][newy] == 1){
        return true;
    }
    else{
        return false;
    }
}
void solve(int x, int y, vector<vector<int> > &arr, int n, vector<string> &ans, vector<vector<bool>> &visit, string path){
    //base case
    if(x == n-1 && y == n-1){
        ans.push_back(path);
        return;
    }

    //4 movement
    //D, L ,R, U

    //Down
    if(isSafe(x+1, y, visited, arr, n)){
        visit[x][y] = 1;
        solve(x+1, y, arr, n, ans, visit, path + 'D');
        visit[x][y] = 0;
    }

    //left
    if(isSafe(x, y-1, visited, arr, n)){
        visit[x][y] = 1;
        solve(x, y-1, arr, n, ans, visit, path + 'L');
        visit[x][y] = 0;
    }

    //right
    if(isSafe(x, y+1, visited, arr, n)){
        visit[x][y] = 1;
        solve(x, y+1, arr, n, ans, visit, path + 'R');
        visit[x][y] = 0;
    }

    //up
    if(isSafe(x-1, y, visited, arr, n)){
        visit[x][y] = 1;
        solve(x-1, y, arr, n, ans, visit, path + 'U');
        visit[x][y] = 0;
    }
}
vector<string> searchMaze(vector<vector<int> > &arr, int n){
    vector<String> ans;
    vector<vector<bool> > visited(n, vector<bool> (n,0));
    string path = "";
    if(arr[0][0] == 0){
        return ans;
    }

    solve(0, 0, arr, n, ans, visited, path);
    return ans;
}
//t.c. o(4 power(n*n))
//s.c. o(n*m)
#include<iostream>
#include<vector>
using namespace std;
int main(){
    class solution{
        private:
        bool issafe(int x, int y, int n, vector<vector<int> > &m, vector<vector<int> > visited){
            if((x>=0 && x<n) && (y>=0 && y<n) && visited[x][y]==0 && m[x][y]==1){
                return true;
            }
            else{
                return false;
            }
        }
        void solve(vector<vector<int> > &m, int x, int y, int n, vector<string>& ans, vector<vector<int> > visited, string path){
            if(x == n-1&& y==n-1){
                ans.push_back(path);
                return;
            }
            visited[x][y]==0;
            int newx= x+1;
            int newy= y;
            if(issafe(newx, newy, n, visited, m)){
                path.push_back("d");
                solve(m, newx, newy, ans, visited, path, n);
                path.pop_back();
            }

            newx= x;
            newy= y-1;
            if(issafe(newx, newy, n, visited, m)){
                path.push_back("l");
                solve(m, newx, newy, ans, visited, path, n);
                path.pop_back();
            }

            newx= x;
            newy= y+1;
            if(issafe(newx, newy, n, visited, m)){
                path.push_back("r");
                solve(m, newx, newy, ans, visited, path, n);
                path.pop_back();
            }

            newx= x-1;
            newy= y;
            if(issafe(newx, newy, n, visited, m)){
                path.push_back("u");
                solve(m, newx, newy, ans, visited, path, n);
                path.pop_back();
            }
            visited[x][y]==0;
        }
        public:
        vector<string> findpath(vector<vector<int> > &m, int n){
            vector<string>ans;
            if(m[0][0]==0){
                return ans;
            }
            int srcx=0;
            int srcy=0;
            vector<vector<int>>visited=m;
            for(int i=0; i<n; i++){
                for(int j=0; j<n; j++){
                    visited[i][j]=0;
                }
            }
            string path="";
            solve(m, ans, n, srcx, srcy, visited, path);
            sort(ans.begin(), ans.end());
            return ans;
        }
    };
}
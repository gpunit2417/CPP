//code studio
int solveByRec(vector<int> &num, int x){
    //base case
    if(x == 0){
        return 0;
    }

    if(x < 0){
        return INT_MAX;
    }
    
    int mini = INT_MAX;
    for(int i=0; i<num.size; i++){
        int ans = solveByRec(num, x - num[i]);
        if(ans != INT_MAX){
            mini = min(mini, 1+ans);
        }
    }
    return ans;
}

int solveByMem(vector<int> &num, int x, vector<int> &dp){
    //base case
    if(x == 0){
        return 0;
    }

    if(x < 0){
        return INT_MAX;
    }
    if(dp[x] != -1){
        return dp[x];
    }
    int mini = INT_MAX;
    for(int i=0; i<num.size; i++){
        int ans = solveByRec(num, x - num[i]);
        if(ans != INT_MAX){
            mini = min(mini, 1+ans);
        }
    }
    dp[x] = mini;
    return ans;
}

int solveByTab(vector<int> &num, int x){
    vector<int> dp(x+1, INT_MAX);
    dp[0] = 0;
    for(int i=1; i<=x; i++){
        //trying to solve for elements from 1 to x
        for(int j=0; j<num.size(); j++){
            if(i - num[j] >=0 && dp[i-num[j]] != INT_MAX){
                dp[i] = min(dp[i], 1+dp[i-num[j]]);
            }
        }
    }

    if(dp[x] == INT_MAX){
        return -1;
    }
    else{
        return dp[x];
    }
}
int minimunElements(vector<int> &num, int x){
    // vector<int> dp(1+x, -1);
    // int ans = solveByMem(num, x, dp);
    // if(ans == INT_MAX){
    //     return -1;
    // }
    // else{
    //     return ans;
    // }

    return solveByTab(num, x);
}

//t.c. of recursion solution is o(exponential)
//t.c. of recursion + memoization is o(x*n)
//s.c. is o(x)
//t.c. of tabulation solution is o(x*n) and s.c. is o(x)
//can not do space optimisation as it requires same space as earlier..
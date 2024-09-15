//code studio
int solveByRec(vector<int> &num, int n){
    //base case
    if(n<0){
        return 0;
    }
    if(n==0){
        return num[0];
    }
    int incl = solveByRec(num, n-2) + num[n];
    int excl = solveByRec(num, n-1) + 0;
    return max(incl, excl);
}
int solveMem(vector<int> &num, int n, vector<int> &dp){
    //base case
    if(n<0){
        return 0;
    }
    if(n==0){
        return num[0];
    }
    if(dp[n] != -1){
        return dp[n];
    }
    int incl = solveByMem(num, n-2) + num[n];
    int excl = solveByMem(num, n-1) + 0;
    dp[n] = max(incl, excl);
    return dp[n];
}
int solveTab(vector<int> &num){
    int n= num.size();
    vector<int> dp(n,0);
    dp[0] = num[0];
    for(int i=1; i<n; i++){
        int incl = dp[i-2] + num[i];
        int excl = dp[i-1] + 0;
        dp[i] = max(incl, excl);
    }
    return dp[n-1];
}
int solveSO(vector<int> &num){
    int n= num.size();
    int prev2 = 0;
    int prev1 = num[0];
    for(int i=1; i<n; i++){
        int incl = prev2 + num[i];
        int excl = prev1 + 0;
        int ans = max(incl, excl);
        prev2 =prev1;
        prev1 = ans;
    }
    return prev1;
}

int maximumNonAdjacentSum(vector<int> &num){
    // int n = num.size();
    // int ans = solveByRec(num, n);
    // return ans;

    // int n= num.size();
    // vector<int> dp(n, -1);
    // return solveMem(num, n-1, dp);

    return solveTab(num);
}

//t.c. of recursion + memoization is o(n)
//s.c. of recursion + memoization is o(n)
//t.c and s.c of tabulation is o(n)
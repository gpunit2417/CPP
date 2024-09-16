//code studio
#define MOD 1000000007
int add(int a, int b){

}
int mul(int a, int b){
    return ((a%MOD) * 1LL * (b%MOD)) % MOD;
}
int solve(int n, int k){
    //base case
    if(n==1){
        return k;
    }
    if(n==2){
        return add(k, mul(k, k-1));
    }
    int ans = add(mul(solve(n-2, k), k-1), mul(solve(n-1, k), k-1));
    return ans;
}
int solveMem(int n, int k, vector<int>& dp){
    //base case
    if(n==1){
        return k;
    }
    if(n==2){
        return add(k, mul(k, k-1));
    }
    if(dp[n] != -1){
        return dp[n];
    }
    dp[n] = add(mul(solveMem(n-2, k, dp), k-1), mul(solveMem(n-1, k, dp), k-1));
    return dp[n];
}
int solveTab(int n, int k){
    vector<int>dp(n+1, 0);
    dp[1] = k;
    dp[2] = add(k, mul(k, k-1));

    for(int i=3; i<=n ;i++){
        dp[i] = add(mul(dp[i-2], k-1), mul(dp[i-1], k-1));
    }
    return dp[n];
}
int solveSO(int n, int k){
    vector<int>dp(n+1, 0);
    int prev2 = k;
    int prev1 = add(k, mul(k, k-1));

    for(int i=3; i<=n ;i++){
        dp[i] = add(mul(prev2, k-1), mul(prev1, k-1));
    }
    return prev1;
}
int numberOfWays(int n, int k){
    // return solve(n,k);   

    // vector<int> dp(n+1, -1);
    // return solveMem(n, k, dp);

    // return solveTab(n,k);

    return solveSO(n,k);
}
//t.c of recursion solution is o(exponential)
//t.c. and s.c of recursion + memoization is o(n)
//t.c of tabulation is o(n)
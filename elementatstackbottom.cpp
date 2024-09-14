//code studio
void solve(stack<int>& s, int x){
    //base case
    if(s.empty()){
        s.push(x);
        return;
    }

    int num = s.top();
    s.pop();
    //recursion
    solve(s, x);
    s.push(num);
}

stack<int> pushAtBottom(stack<int>& ,){
    solve(myStack, x);
    return myStack;
}
//code studio
void sortedInsert(stack<int> &stack, int num){
    //base case
    if(stack.empty() || (!stack.empty() && stack.top() < num)){
        stack.push(num);
        return;
    }
    int n= stack.top();
    stack.top();

    //recursion
    sortedInsert(stack, num);
    stack.push(n);
}
void sortStack(stack<int> &stack){
    //base case
    if(stack.empty()){
        return;
    }
    int num = stack.top();
    stack.pop();

    //recursion
    sortStack(stack);

    sortedInsert(stack, num);
}
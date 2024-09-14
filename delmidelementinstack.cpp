//code studio
void solve(stack<int>&inputStack, int count, int size){
    //base case
    if(count == size/2){
        inputStack.pop();
        return;
    }

    int num = inputStack.top();
    inputStack.top();

    //recursion
    solve(inputStack, count+1, size);
    inputStack.push(num);
}

void deleteMiddle(stack<int>&nputStack, int N){
    int count = 0;
    solve(inputStack, count, N);
}
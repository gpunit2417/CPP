#include<bits/stdc++.h>
using namespace std;
int calculate_Postfix(string  post_exp){
    stack <int> stack;
    int len = post_exp.length();
    for (int i = 0; i < len; i++){ 
        if ( post_exp[i] >= '0' &&  post_exp[i] <= '9'){
            stack.push( post_exp[i] - '0');
        }
        else{
            int a = stack.top();
            stack.pop();
            int b = stack.top();
            stack.pop();
            switch (post_exp[i]){
                case '+': stack.push(b + a);
                          break;
                case '-': stack.push(b - a);
                          break;
                case '*': stack.push(b * a);
                          break;
                case '/': stack.push(b / a);
                          break;
                case '^': stack.push(pow(b,a));
                          break;
            }
        }
    }
    return stack.top();
}
int main(){
    string postfix_expression = "59+33^4*6/-";
    cout<<"The answer is : ";
    cout<<calculate_Postfix(postfix_expression);
    return 0;
}
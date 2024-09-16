//leetcode
// class Solution{
//     public:
//     void reverseString(vector<char> &s){
//         int st=0;
//         int e=s.size()-1;
//         while(st<e){
//             swap(s[st++], s[e--]);
//         }
//     }
// };

//by babbar
#include<iostream>
using namespace std;
// void reverse(string &str, int i, int j){
//     cout<<"call received for "<<str<<endl;

//     if(i>j){
//         return;
//     }
//     swap(str[i], str[j]);
//     i++;
//     j--;

//     reverse(str, i, j);
// }

// int main(){
//     string name = "punit";
//     cout<<endl;
//     reverse(name, 0, name.length()-1);
//     cout<<endl;
//     cout<<name<<endl;

//     return 0;
// }

//by babbar using stack
#include<stack>
int main(){
    string str = "punit";
    stack<char> s;
    for(int i=0; i<str.length(); i++){
        char ch = str[i];
        s.push(ch);
    }
    string ans = "";
    while(!s.empty()){
        char ch = s.top();
        ans.push_back(ch);
        s.pop();
    }

    cout<<"answer is "<<ans<<endl;

    return 0;
}
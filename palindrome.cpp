#include<iostream>
using namespace std;
bool palindrome(string str, int i, int j){
    if(i>j){
        return true;
    }
    if(str[i] != str[j]){
        return false;
    }
    else{
        return palindrome(str, i+1, j-1);
    }
}

int main(){
    string name = "bookkoob";
    cout<<endl;

    bool ispalindrome = palindrome(name, 0, name.length()-1);

    if(ispalindrome){
        cout<<"palindrome "<<endl;
    }
    else{
        cout<<"not a palindrome "<<endl;
    }

    return 0;
}

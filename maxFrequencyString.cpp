#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    string str = "typewriteriswriting";

    int fre[26];
    for(int i=0; i<26; i++){
        fre[i] = 0;
    }

    for(int i=0; i<str.size(); i++){
        fre[str[i] - 'a']++;
    }

    int maxf = 0;
    char ans = 'a';
    for(int i=0; i<26; i++){
        if(maxf < fre[i]){
            maxf = fre[i];
            ans = i + 'a';
        }
    }

    cout<<maxf<<" "<<ans<<endl;

    return 0;
}
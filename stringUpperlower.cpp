#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

// int main(){
//     string str = "punit";

//     for(int i=0; i<str.length(); i++){
//         str[i] -= 32;
//     }
//     cout<<str<<endl;

//     for(int i=0; i<str.length(); i++){
//         str[i] += 32;
//     }
//     cout<<str<<endl;

//     return 0;
// }

//another method

int main(){
    string str = "punitgoyal";

    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout<<str<<endl;

    transform(str.begin(), str.end(), str.begin(), ::tolower);
    cout<<str<<endl;
}
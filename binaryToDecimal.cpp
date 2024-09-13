#include<iostream>
using namespace std;

int binaryToDecimal(int num){
    int ans = 0;
    int x = 1;
    while(num>0){
        int y = num%10;
        ans = ans + x*y;
        x = x*2;
        num = num/10;
    }
    return ans;
}

int OctalToDecimal(int num){
    int ans = 0;
    int x = 1;
    while(num>0){
        int y = num%10;
        ans = ans + x*y;
        x = x*8;
        num = num/10;
    }
    return ans;
}

int hexadecimalToDecimal(string num){
    int ans = 0;
    int x = 1;

    int s = num.size();
    for(int i=s-1; i>=0; i--){
        if(num[i] >= '0' && num[i] <= '9'){
            ans = ans + x*(num[i] - '0');
        }
        else if(num[i] >= 'A' && num[i] <= 'F'){
            ans = ans + x*(num[i] - 'A' + 10);
        }
        x = x*16;
    }
    return ans;
}

int decimalToBinary(int n){
    int x = 1;
    int ans = 0;
    while(x<=n){
        x = x*2;
    }
    x = x/2;

    while(x>0){
        int lastDigit = n/x;
        n = n - lastDigit*x;
        x = x/2;
        ans = ans*10 + lastDigit;
    }
    return ans;
}

int decimalToOctal(int n){
    int x = 1;
    int ans = 0;
    while(x<=n){
        x = x*8;
    }
    x = x/8;

    while(x>0){
        int lastDigit = n/x;
        n = n - lastDigit*x;
        x = x/8;
        ans = ans*10 + lastDigit;
    }
    return ans;
}

string decimalToHexa(int n){
    int x = 1;
    string ans = "";
    while(x<=n){
        x = x*16;
    }
    x = x/16;

    while(x>0){
        int lastDigit = n/x;
        n = n - lastDigit*x;
        x = x/16;
        if(lastDigit<=9){
            ans = ans + to_string(lastDigit);
        }
        else{
            char c = 'A' + lastDigit - 10;
            ans.push_back(c);
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;

    // cout<<binaryToDecimal(n)<<endl;
    // cout<<OctalToDecimal(n)<<endl;
    // cout<<decimalToBinary(n)<<endl;
    // cout<<decimalToOctal(n)<<endl;


    // string n;
    // cin>>n;
    // cout<<hexadecimalToDecimal(n)<<endl;
    cout<<decimalToHexa(n)<<endl;
    return 0;
}
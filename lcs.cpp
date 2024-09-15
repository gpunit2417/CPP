// #include<bits/stdc++.h>
// using namespace std;

// void printTables(int table[][100], int n){
//     for(int a=1; a<=n; a++){
//         for(int b=1; b<=n; b++){
//             cout<<setw(10)<<table[a][b]<<" ";
//         }
//         cout<<endl;
//     }
// }

// void PrintLCS(int b[100][100], string str1, int i, int j){
//     if(i == 0 || j == 0){
//         return;
//     }
//     if(b[i][j] == 1){
//         PrintLCS(b, str1, i-1, j-1);
//     }
//     else if(b[i][j] == 2){
//         PrintLCS(b, str1, i-1, j);
//     }
//     else{
//         PrintLCS(b, str1, i, j-1);
//     }
// }

// string longestSequence(string str1, string str2){
//     int m = str1.length();
//     cout<<m<<endl;
//     int n = str2.length();
//     cout<<n<<endl;
//     int c[100][100];
//     int b[100][100];
//     for(int i=0; i<=m; i++){
//         c[i][0] = 0;
//     }
//     for(int j=0; j<=n; j++){
//         c[0][j] = 0;
//     }
//     for(int k = 1; k<=m; k++){
//         for(int x =1; x<=n; x++){
//             if(str1[k] == str2[x]){
//                 c[k][x] = c[k-1][x-1] + 1;
//                 b[k][x] = 7;
//             }
//             else if(c[k-1][x] >= c[k][x-1]){
//                 c[k][x] = c[k-1][x];
//                 b[k][x] = 8;
//             }
//             else{
//                 c[k][x] = c[k][x-1];
//                 b[k][x] = 9;
//             }
//         }
//     }
//     cout<<"printing c table "<<endl;
//     printTables(c, m);
//     cout<<"printing b table "<<endl;
//     printTables(b, n);
//     PrintLCS(b, str1, m, n);
// }

// int main(){
//     string str1;
//     cout<<"enter first string "<<endl;
//     cin>> str1;

//     string str2;
//     cout<<"enter the second string "<<endl;
//     cin>>str2;

//     longestSequence(str1, str2);

//     return 0;
// }
#include <bits/stdc++.h> 
using namespace std; 
int lcs(string s,string t,vector<vector<int>>&dp){     
    int n=s.size(); 
    int m=t.size(); 
 
    // Initializing dp 
    for(int i=0;i<=n;i++) dp[i][0]=0; 
    for(int j=0;j<=m;j++) dp[0][j]=0; 
 
    for(int i=1;i<=n;i++){         
        for(int j=1;j<=m;j++){             
            if(s[i-1]==t[j-1]){ 
                dp[i][j]=1+dp[i-1][j-1]; 
            }             
            else{ 
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]); 
            } 
        } 
    } 
    return dp[n][m]; 
} 	 
 
string LCSstring(string s,string t,vector<vector<int>>&dp){     
    int n=s.size();     
    int m=t.size();      
    int len=dp[n][m];     
    string str=""; 
    for(int i=0;i<len;i++) 
    str+='$';     
    int i=n,j=m;     
    int idx=len-1;     
    while(i>0 && j>0){                 
        if(s[i-1]==t[j-1]){             
            str[idx]=s[i-1];             
            i--; 
            j--; 
            idx--; 
             
        }        
        else if(dp[i-1][j]>dp[i][j-1]){
            i--;
        }         
        else{
            j--;
        }
    } 
 
    return str; 
} 
 
int main() 
{ 
    string s1, s2; 
 
    // Taking input of two strings from user 
    cout << "Enter first string: ";     cin >> s1; 
    cout << "Enter second string: "; 
    cin >> s2; 
 
    int n = s1.length(); 
    int m = s2.length(); 
 
    vector<vector<int>>dp(n+1,vector<int>(m+1,0)); 
 
    int len = lcs(s1,s2,dp); 
 
    string LCS=LCSstring(s1,s2,dp); 
 
    // Printing the longest common subsequence 
    cout << "Longest Common Subsequence of " << s1 << " and " << s2 << " is: " <<LCS << endl; 
    cout << "Length of LCS is: " << len << endl; 
 
    return 0; 
} 

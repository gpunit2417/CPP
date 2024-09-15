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
// void POP(int s[][100], int i, int j){
//     if(i == j){
//         cout<<"A"<<i<<" ";
//     }
//     else{
//         cout<<"(";
//         POP(s, i, s[i][j]);
//         POP(s, s[i][j]+1, j);
//         cout<<")";
//     }
// }

// int mcm(int p[], int n){
//     int m[100][100];
//     int s[100][100];
//     int j;
//     int size = n;
//     for(int i=1; i<size; i++){
//         m[i][i] = 0;
//     }
//     for(int l=2; l<size; l++){
//         for(int i=1; i<size-l+1; i++){
//             j = i + l - 1;
//             m[i][j] = INT_MAX;
//             for (int k = i; k <= j - 1; k++)
//             {
//                 // mul = cost/scalar multiplications
//                 int mul = m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j];
//                 if (mul < m[i][j])
//                     m[i][j] = mul;
//                     s[i][j] = k;
//             }
//         }
//     }
//     cout<<"printing m table "<<endl;
//     printTables(m, n-1);
//     cout<<"printing s table "<<endl;
//     printTables(s, n-1);
//     POP(s, 1, n-1);
//     return m[1][n-1];
// }

// int main(){
//     int n;
//     cout<<"enter the size of the matrix array: "<<endl;
//     cin>>n;
//     int arr[n+1];
//     cout<<"enter the elements of the array: "<<endl;
//     for(int i=0; i<=n ; i++){
//         cin>>arr[i];
//     }
//     cout<<endl;

//     cout<<"output of mcm will be "<<mcm(arr, n+1);

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

void print_tables(int table[][100], int n) {
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            cout << setw(10) << table[i][j] << " ";
        }
        cout << endl;
    }
}

void print_optimal_parentheses(int s[][100], int i, int j) {
    if(i == j) {
        cout << "A" << i<<" ";
    } else {
        cout << "(";
        print_optimal_parentheses(s, i, s[i][j]);
        print_optimal_parentheses(s, s[i][j]+1, j);
        cout << ")";
    }
}

int matrix_chain_order(int p[], int n) {
    int m[100][100], s[100][100];
    for(int i=1; i<n; i++) m[i][i] = 0;
    for(int L=2; L<n; L++) {
        for(int i=1; i<n-L+1; i++) {
            int j = i+L-1;
            m[i][j] = INT_MAX;
            for(int k=i; k<=j-1; k++) {
                int q = m[i][k] + m[k+1][j] + p[i-1]*p[k]*p[j];
                if(q < m[i][j]) {
                    m[i][j] = q;
                    s[i][j] = k;
                }
            }
        }
    }
    cout << "m table:\n";
    print_tables(m, n-1);
    cout << "\ns table:\n";
    print_tables(s, n-1);
    cout << "\nOptimal Parentheses: ";
    print_optimal_parentheses(s, 1, n-1);
    cout << endl;
    return m[1][n-1];
}

int main() {
    int n;
    cout << "Enter the number of matrices: ";
    cin >> n;
    int p[n+1];
    cout << "Enter the dimensions of the matrices:\n";
    for(int i=0; i<=n; i++) {
        cin >> p[i];
    }
    cout << "Minimum cost for matrix multiplication: " << matrix_chain_order(p, n+1) << endl;
    return 0;
}
#include <iostream>
using namespace std;

// int main() {

//   int i, n;
//   bool is_prime = true;

//   cout << "Enter a positive integer: ";
//   cin >> n;

//   // 0 and 1 are not prime numbers
//   if (n == 0 || n == 1) {
//     is_prime = false;
//   }

//   // loop to check if n is prime
//   for (i = 2; i <= n/2; ++i) {
//     if (n % i == 0) {
//       is_prime = false;
//       break;
//     }
//   }

//   if (is_prime)
//     cout << n << " is a prime number";
//   else
//     cout << n << " is not a prime number";

//   return 0;
// }

//by babbar
bool isPrime(int n){
  if(n<=1){
    return false;
  }
  for(int i=2; i<n; i++){
    if(n%i == 0){
      return false;
    }
  }
  return true;
}

int main(){
  int n;
  cin>>n;
  if(isPrime(n)){
    cout<<"it is a prime number "<<endl;
  }
  else{
    cout<<"it is not a prime number "<<endl;
  }
}

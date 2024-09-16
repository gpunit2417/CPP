// C++ program to demonstrate the use of rand() to get value in a range of 0 to N
//every time same numbers are generated 
// #include <cstdlib>
// #include <iostream>
// using namespace std;
// int main()
// {
// 	int N = 100;
// 	// This program will create some sequence of random
// 	// numbers on every program run within range N
// 	for (int i = 0; i < 5; i++)
// 		cout << rand() % N << " ";
// 	return 0;
// }


// C++ program to demonstrate the use of rand() to get value in a range of lb to ub
//every time same numbers are generated
// #include <cstdlib>
// #include <iostream>
// using namespace std;

// int main(){
// 	int lb = 20, ub = 100;
// 	// This program will create some sequence of random
// 	// numbers on every program run within range lb to ub
// 	for (int i = 0; i < 5; i++)
// 		cout << (rand() % (ub - lb + 1)) + lb << " ";

// 	return 0;
// }


// C++ program to generate random numbers
// #include <cstdlib>
// #include <iostream>
// #include <time.h>
// using namespace std;

// int main()
// {
// 	// This program will create different sequence of
// 	// random numbers on every program run

// 	// Use current time as seed for random generator
// 	srand(time(0));       to generate random numbers

// 	for (int i = 0; i < 4; i++)
// 		cout << rand() << " ";

// 	return 0;
// }


//c++ program to store randomly generated numbers in array
#include <iostream>
#include <cstdlib>   // used for rand and srand function
#include <time.h>   //used for time
using namespace std;

int main()

{

int MyNumber;

cout<<"Enter the array size number::";

cin>>MyNumber;

int Rand[10];      //10 is written just to avoid error otherwise MyNumber was written here
srand(time(NULL)); // generate random numbers every time.... if don't use same numbers will come...
for(int r= 0; r <MyNumber; r++)

Rand[r]=rand()%10;

cout<<"\nArray Elements::"<<endl;

for(int r=0; r<MyNumber ; r++)

cout<<"Number of Elements "<<r+1<<"::"<<Rand[r]<<endl;

return 0;

}
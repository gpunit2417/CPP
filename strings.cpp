#include<iostream>
#include<string>

using namespace std;

int main(){

    //string declaration without spaces

    // string str = "punitgoyal";

    //below two lines for string input
    // string str;
    // cin>>str;

    // string str(5, 'p');

    //string declaration with spaces
    string str;
    getline(cin, str);
    cout<<str;

    return 0;
}


//functions
//.append()
//concatenation
//.clear()
//.compare()
//.empty()
//.erase() takes 2 arguments.... first is index from where we want to delete and second is how many characters.
//.find()
//.insert() takes 2 arguments.... first is index where to insert and second is the string which is to insert...
//.size() or length()
//.substr() takes 2 arguments... one is the index from where we want to take sub string and second is the length or number of characters to take.
//.stoi() converts a string into an integer... stands for string to integer..

//to_string() converts an int to string
//.sort(str.begin(), str.end())

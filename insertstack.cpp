#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int>stk;
    int choice, n, temp;
     
    do
    {
        cout<<endl;
        cout<<"0 - Exit."<<endl;
        cout<<"1 - Push Item."<<endl;
        cout<<"2 - Pop Item."<<endl;
        cout<<"3 - Display Items (Print STACK)."<<endl;
         
        cout<<"Enter your choice: ";
        cin>>choice;
         
        switch(choice)
        {
            case 0: break;
             
            case 1:
                cout<<"Enter item to insert: ";
                cin>>n;
                temp=stk.push(n);
                if(temp==n)
                    cout<<"STACK OVERFLOW - STACK IMPLEMENTATION ERROR"<<endl;
                else
                    cout<<temp<<" inserted."<<endl;
                break;
                 
            case 2:
                temp=stk.pop();
                if(temp==n)
                    cout<<"STACK UNDERFLOW - STACK ADT ERROR"<<endl;
                else
                    cout<<temp<<" is removed (popped)."<<endl;
                break;
             
            case 3:
                while (!stack.empty()) {
		            cout<< stack.top() <<" ";
		            stack.pop();
                    break;
                }
             
            default:
                cout<<"An Invalid choice."<<endl;
        }   
    }while(choice!=0);
 
 return 0;
}
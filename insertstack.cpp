#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> stk;
    int choice, n;

    do {
        cout << endl;
        cout << "0 - Exit." << endl;
        cout << "1 - Push Item." << endl;
        cout << "2 - Pop Item." << endl;
        cout << "3 - Display Items (Print STACK)." << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 0:
                break;

            case 1:
                cout << "Enter item to insert: ";
                cin >> n;
                stk.push(n);
                cout << n << " inserted." << endl;
                break;

            case 2:
                if (!stk.empty()) {
                    cout << stk.top() << " is removed (popped)." << endl;
                    stk.pop();
                } else {
                    cout << "STACK UNDERFLOW - No elements to pop!" << endl;
                }
                break;

            case 3:
                if (stk.empty()) {
                    cout << "STACK is empty!" << endl;
                } else {
                    stack<int> tempStack = stk; // Create a copy to display items
                    cout << "Stack elements (top to bottom): ";
                    while (!tempStack.empty()) {
                        cout << tempStack.top() << " ";
                        tempStack.pop();
                    }
                    cout << endl;
                }
                break;

            default:
                cout << "Invalid choice. Please enter a valid option." << endl;
        }
    } while (choice != 0);

    return 0;
}

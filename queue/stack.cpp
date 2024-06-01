#include <iostream>
#include <stack>
using namespace std;


int main() {
    stack<int> myStack;

    // Insert elements into the stack
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);

    // Print all elements in the stack without using pop
    cout << "Stack elements:" << endl;
    stack<int> tempStack;  // Temporary stack to preserve the original order

    while (!myStack.empty()) {
        int topElement = myStack.top();
        std::cout << topElement << std::endl;
        tempStack.push(topElement);
        myStack.pop();
    }

    if (myStack.empty()){
        cout << "underflow condition or empty"<< endl;
    }

    // Restore the original order by pushing elements back to the original stack
    while (!tempStack.empty()) {
        myStack.push(tempStack.top());
        tempStack.pop();
    }

    

    return 0;
}

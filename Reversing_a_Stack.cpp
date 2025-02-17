#include <iostream>
#include <stack>
using namespace std;

// Function to reverse a stack
void reverseStack(stack<int> &st) {
    stack<int> tempStack;

    // Transfer elements to the temporary stack
    while (!st.empty()) {
        tempStack.push(st.top());
        st.pop();
    }

    // Transfer back to the original stack (now reversed)
    st = tempStack;
}

// Function to print the stack
void printStack(stack<int> st) {
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main() {
    stack<int> st;

    // Pushing elements into the stack
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    cout << "Original Stack: ";
    printStack(st);

    // Reverse the stack
    reverseStack(st);

    cout << "Reversed Stack: ";
    printStack(st);

    return 0;
}

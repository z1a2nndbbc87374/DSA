//Array-based Implementation of Two-way Stack ADT
#include<iostream>
#define N 10
using namespace std;

class TwoWayStack {
private:
    int arr[N];
    int top1; // Top of the first stack
    int top2; // Top of the second stack

public:
    // Constructor
    TwoWayStack() {
        top1 = -1; // Initialize top of first stack
        top2 = N;  // Initialize top of second stack
    }

    // Function to push element into first stack
    void push1(int x) {
        if (top1 < top2 - 1) {
            arr[++top1] = x;
            cout << "Pushed element into stack 1: " << x << endl;
        } else {
            cout << "Stack 1 overflow\n";
        }
    }

    // Function to push element into second stack
    void push2(int x) {
        if (top1 < top2 - 1) {
            arr[--top2] = x;
            cout << "Pushed element into stack 2: " << x << endl;
        } else {
            cout << "Stack 2 overflow\n";
        }
    }

    // Function to pop element from first stack
    int pop1() {
        if (top1 >= 0) {
            int x = arr[top1--];
            cout << "Popped element from stack 1: " << x << endl;
            return x;
        } else {
            cout << "Stack 1 underflow\n";
            return -1;
        }
    }

    // Function to pop element from second stack
    int pop2() {
        if (top2 < N) {
            int x = arr[top2++];
            cout << "Popped element from stack 2: " << x << endl;
            return x;
        } else {
            cout << "Stack 2 underflow\n";
            return -1;
        }
    }
};

int main() {
    TwoWayStack stack;
    stack.push1(1);
    stack.push2(2);
    stack.push1(3);
    stack.push2(4);
    stack.push1(5);
    stack.push2(6);
    stack.pop1();
    stack.pop2();
    stack.pop1();
    stack.pop2();
    stack.pop1();
    stack.pop2();
    stack.pop1(); // Stack 1 underflow
    stack.pop2(); // Stack 2 underflow
    return 0;
}

#include <iostream>
using namespace std;

class Stack {
    protected:
        enum { MAX = 3 }; // constant specific to class
        int st[MAX]; // stack: array of integers
        int top; // index of top of stack
    public:
        Stack() {
            top = -1;
        }
        void push(int var) {
            st[++top] = var;
        }
        int pop() {
            return st[top--];
        }
};

class Stack2: public Stack {
    public:
        void push(int var) {
            if (top >= MAX - 1) {
                cout << "\nError: stack is full";
                return;
            }
            Stack::push(var);
        }
        int pop() {
            if (top < 0) {
                cout << "\nError: stack is empty";
                return 0;
            }
            return Stack::pop();
        }
};

int main() {
    Stack2 s1;
    s1.push(11);
    s1.push(22);
    s1.push(33);
    cout << "\n" << s1.pop();
    cout << "\n" << s1.pop();
    cout << "\n" << s1.pop();
    cout << endl;
    return 0; 
}
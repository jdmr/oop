#include <iostream>
using namespace std;
const int MAX = 3;
class Stack {
    private:
        int st[MAX];
        int top;
    public:
        class Range{};
        Stack(){ top = -1; }
        void push(int var) {
            if (top >= MAX - 1) throw Range();
            st[++top] = var;
        }
        int pop() {
            if (top < 0) throw Range();
            return st[top--];
        }
};
int main() {
    Stack s1;
    try {
        cout << "adding 11" << endl;
        s1.push(11);
        cout << "adding 22" << endl;
        s1.push(22);
        cout << "adding 33" << endl;
        s1.push(33);
        cout << "adding 44" << endl;
        s1.push(44); // oops: stack full
        cout << "adding 55" << endl;
        s1.push(55); // oops: stack full
        cout << "adding 66" << endl;
        s1.push(66); // oops: stack full
        cout << "done adding elements" << endl;
    } catch (Stack::Range) {
        cout << "Exception: Stack Full" << endl;
    }
    try {
        cout << "1: " << s1.pop() << endl;
        cout << "2: " << s1.pop() << endl;
        cout << "3: " << s1.pop() << endl;
        cout << "4: " << s1.pop() << endl; // oops: stack empty
        cout << "5: " << s1.pop() << endl; // oops: stack empty
        cout << "6: " << s1.pop() << endl; // oops: stack empty
    } catch (Stack::Range) {
        cout << "Exception: Stack Empty" << endl;
    }
    cout << "Done" << endl;
    return 0;
}





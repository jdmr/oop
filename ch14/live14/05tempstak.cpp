#include <iostream>
using namespace std;
const int MAX = 100;
template <class T>
class Stack {
    private:
        T st[MAX];
        int top;
    public:
        Stack() {
            top = -1;
        }
        void push(T var) {
            st[++top] = var;
        }
        T pop() {
            return st[top--];
        }
};
int main() {
    Stack<float> s1;
    s1.push(1111.1F);
    s1.push(2222.2F);
    cout << "1: " << s1.pop() << endl;
    cout << "2: " << s1.pop() << endl;
    Stack<long> s2;
    s2.push(123123123L);
    s2.push(234234234L);
    cout << "1: " << s2.pop() << endl;
    cout << "2: " << s2.pop() << endl;
    return 0;
}



#include <iostream>
using namespace std;

class Counter {
    protected:
        unsigned int count;
    public:
        Counter() : count(0) {
            cout << "Counter constructor" << endl;
        }
        Counter(int c) : count(c) {
            cout << "Counter constructor" << endl;
        }
        unsigned int get_count() const {
            return count;
        }
        Counter operator ++ () {
            return Counter(++count);
        }
};

class CountDn : public Counter {
    public:
        CountDn() : Counter() {
            cout << "CountDn constructor" << endl;
        }
        CountDn(int c) : Counter(c) {
            cout << "CountDn constructor" << endl;
        }
        Counter operator -- () {
            return Counter(--count);
        }
        // overload operator ++ to handle postfix increment
        Counter operator ++ (int) {
            return Counter(count++);
        }
};



int main() {
    CountDn c1;
    CountDn c2(100);
    cout << "\nc1 = " << c1.get_count();
    cout << "\nc2 = " << c2.get_count();
    ++c1;
    ++c1;
    --c2;
    --c2;
    --c2;
    cout << "\nc1 = " << c1.get_count();
    cout << "\nc2 = " << c2.get_count();
    --c2;
    cout << "\nc3 = " << c2.get_count();
    return 0;
}
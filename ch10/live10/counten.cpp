#include <iostream>
using namespace std;

class Counter {
    protected:
        unsigned int count;
    public:
        Counter() : count(0) {
            cout << "Counter() called" << endl;
        }
        Counter(int c) : count(c) {
            cout << "Counter(int) called" << endl;
        }
        unsigned int get_count() const {
            return count;
        }
        Counter operator ++ () {
            return Counter(++count);
        }
        Counter operator ++ (int) {
            return Counter(count++);
        }
};

class CountDn : public Counter {
    public:
        CountDn() : Counter() {
            cout << "CountDn() called" << endl;
        }
        CountDn(int c) : Counter(c) {
            cout << "CountDn(int) called" << endl;
        }
        CountDn operator -- () {
            return CountDn(--count);
        }
        CountDn operator -- (int) {
            return CountDn(count--);
        }
};

int main() {
    CountDn c1;
    CountDn c2(100);

    cout << "\nc1=" << c1.get_count();
    cout << "\nc2=" << c2.get_count();

    ++c1; ++c1; ++c1;
    cout << "\nc1=" << c1.get_count();

    --c2; --c2;

    CountDn c3 = --c2;
    cout << "\nc3=" << c3.get_count();
    cout << endl;

    c3 = c2--;
    cout << "c3=" << c3.get_count();
    cout << "\nc2=" << c2.get_count() << endl;
    return 0;
}
//static class data
#include <iostream>

using namespace std;

class foo {
    private:
        static int count;
    public:
        foo() {
            count++;
        }
        int getcount() {
            return count;
        }
};

int foo::count = 0;

int main() {
    foo f1, f2, f3;
    cout << "Count is " << f1.getcount() << endl;
    cout << "Count is " << f2.getcount() << endl;
    cout << "Count is " << f3.getcount() << endl;
    return 0;
}
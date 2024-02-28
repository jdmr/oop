#include <iostream>
using namespace std;

class A {
    public: 
        void show() {
            cout << "Class A\n";
        }
};

class B {
    A objA;
    public:
        void show() {
            objA.show();
        }
};

int main() {
    B objB;
    objB.show();
    return 0;
}


#include <iostream>
using namespace std;

class A {
    public: 
        void show() {
            cout << "Class A\n";
        }
};

class B : public A {};
class C : public A {};
class D : public B, public C {};

int main() {
    D objD;
    // objD.show(); // error: request for member 'show' is ambiguous
    objD.B::show();
    objD.C::show();
    return 0;
}


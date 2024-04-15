#include <iostream>
using namespace std;

class Base {
    public:
        virtual ~Base() {
            cout << "Base destructor\n";
        }
};

class Derv1: public Base {
    public:
        ~Derv1() {
            cout << "Derv1 destructor\n";
        }
};

int main() {
    Base *ptr;
    ptr = new Derv1;
    delete ptr;
    return 0;
}
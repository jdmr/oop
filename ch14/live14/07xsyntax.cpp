#include <iostream>
using namespace std;

class AClass {
    public:
        class AnError {};
        void Func() {
            if (1) throw AnError();
        }
};

int main() {
    AClass a;
    try {
        a.Func();
    } catch (AClass::AnError) {
        cout << "Caught an error" << endl;
    }
    return 0;
}





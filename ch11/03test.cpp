#include <iostream>
using namespace std;

class alpha {
    private:
        int data;
    public:
        alpha() {
            data = 0;
        }
        alpha(int d) {
            data = d;
        }
        alpha(alpha& a) {
            data = a.data;
            cout << "\nCopy constructor invoked";
        }
        void display() {
            cout << data << endl;
        }
        void operator =(alpha& a) {
            data = a.data;
            cout << "\nAssignment operator invoked";
        }
};

int main() {
    alpha a1(37);
    alpha a2;

    cout << "\na2=";
    a2.display();

    cout << "assigning a2 = a1\n";
    a2 = a1;
    cout << "\na2=";
    a2.display();

    cout << "alpha a3 = a2\n";
    alpha a3 = a2;
    cout << "\na3=";
    a3.display();

    cout << "alpha a4(a1)\n";
    alpha a4(a1);
    cout << "\na4=";
    a4.display();
    return 0;
}

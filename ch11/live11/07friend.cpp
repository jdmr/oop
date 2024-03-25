#include <iostream>
using namespace std;
class beta;
class alpha {
    private:
        int data;
    public:
        alpha() : data(3) { }
        friend int frifunc(alpha, beta);
};
class beta {
    private:
        int data;
    public:
        beta() : data(7) { }
        friend int frifunc(alpha, beta);
};
int frifunc(alpha a, beta b) {
    return (a.data + b.data);
}
int main() {
    alpha a;
    beta b;
    cout << frifunc(a, b) << endl;
    return 0;
}



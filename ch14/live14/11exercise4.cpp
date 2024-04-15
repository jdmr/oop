#include <iostream>
using namespace std;

template <class T>
void swaps(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}
int main() {
    int i = 10, j = 20;
    double x = 10.1, y = 23.3;
    char a = 'x', b = 'z';
    cout << "Original i, j: " << i << ' ' << j << endl;
    cout << "Original x, y: " << x << ' ' << y << endl;
    cout << "Original a, b: " << a << ' ' << b << endl;
    swaps(i, j);
    swaps(x, y);
    swaps(a, b);
    cout << "Swapped i, j: " << i << ' ' << j << endl;
    cout << "Swapped x, y: " << x << ' ' << y << endl;
    cout << "Swapped a, b: " << a << ' ' << b << endl;
    return 0;
}
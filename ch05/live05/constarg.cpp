#include <iostream>

void aFunc(int& a, const int& b);

int main() {
    int a = 1;
    int b = 2;
    aFunc(a, b);
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
}

void aFunc(int& a, const int& b) {
    a = 3;
    // b = 4; // error: assignment of read-only reference ‘b’
}
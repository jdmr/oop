#include <iostream>
using namespace std;

int main() {
    char str1[] = "Defined as an array";
    char* str2 = "Defined as a pointer";

    cout << str1 << endl;
    cout << str2 << endl;

    // str++; // Error
    str2++; // OK
    cout << str2 << endl;
    return 0;
}



#include <iostream>
using namespace std;

int main() {
    int var1 = 11;
    int var2 = 22;

    int* ptr; // define a pointer to an integer
    ptr = &var1; // assign the address of var1 to ptr
    cout << "Contents of ptr: " << *ptr << endl;

    ptr = &var2; // assign the address of var2 to ptr
    cout << "Contents of ptr: " << *ptr << endl;

    return 0;
}


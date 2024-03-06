#include <iostream>
using namespace std;

int main() {
    int var1, var2;
    int* ptr; // define a pointer to an integer

    ptr = &var1; // assign the address of var1 to ptr
    *ptr = 37; // assign 37 to the location ptr is pointing to
    var2 = *ptr; // assign the contents of the location ptr is pointing to to var2

    cout << "Contents of ptr: " << *ptr << endl;

    return 0;
}


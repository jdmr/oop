#include <iostream>
using namespace std;

int main() {
    int intarray[5] = {31, 54, 77, 52, 93};
    int* ptr;
    ptr = intarray; // set the pointer to the first element of the array
    for (int i = 0; i < 5; i++) {
        cout << "Element " << i << " is " << *(ptr++) << endl;
        cout << "Value of ptr: " << *ptr << endl;     
    }
    return 0;
}
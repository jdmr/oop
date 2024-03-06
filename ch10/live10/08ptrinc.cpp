#include <iostream>
using namespace std;

int main() {
    int intarray[5] = {31, 54, 77, 52, 93};
    int* ptrint; // pointer to an integer
    ptrint = intarray; // point to the beginning of the array
    for (int i = 0; i < 5; i++) {
        cout << "Element " << i << " is " << *(ptrint++) << endl;
    }
    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int intvar; // integer variable
    float floatvar; // float variable

    int* ptrint; // define a pointer to an integer
    float* ptrflo; // define a pointer to a float
    void* ptrvoid; // define a pointer to void

    ptrint = &intvar; // assign the address of intvar to ptrint
    // ptrint = &floatvar; // error: cannot assign the address of floatvar to ptrint
    // ptrflo = &intvar; // error: cannot assign the address of intvar to ptrflo
    ptrflo = &floatvar; // assign the address of floatvar to ptrflo

    ptrvoid = &intvar; // assign the address of intvar to ptrvoid
    ptrvoid = &floatvar; // assign the address of floatvar to ptrvoid

    return 0;
}


#include <iostream>
using namespace std;

int main() {
    void centimize(double* ptrd);
    double var = 10.0;
    cout << "var = " << var << " inches" << endl;
    centimize(&var);
    cout << "var = " << var << " centimeters" << endl;
    return 0;
}

void centimize(double* ptrd) {
    *ptrd *= 2.54;
}


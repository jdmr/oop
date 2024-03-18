#include <iostream>
using namespace std;

int main() {
    void centimize(double& ref);
    double var = 10.0;
    cout << "var = " << var << " inches" << endl;
    centimize(var);
    cout << "var = " << var << " centimeters" << endl;
    return 0;
}

void centimize(double& ref) {
    ref *= 2.54;
}



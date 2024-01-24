#include <iostream>
#include <iomanip>

void starline();

int main() {
    using namespace std;
    starline();
    cout << "Data type range\n";
    starline();
    cout << "char:  " << setw(20) <<  CHAR_MIN << " to " << setw(19) << CHAR_MAX << endl;
    cout << "short: " << setw(20) << SHRT_MIN << " to " << setw(19)  << SHRT_MAX << endl;
    cout << "int:   " << setw(20) << INT_MIN << " to " << setw(19)  << INT_MAX << endl;
    cout << "long:  " << setw(20) << LONG_MIN << " to " << setw(19)  << LONG_MAX << endl;
    starline();
    return 0;
}

void starline() {
    using namespace std;
    for (int i = 0; i < 50; i++) {
        cout << "*";
    }
    cout << endl;
}

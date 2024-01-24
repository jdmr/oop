#include <iostream>

using namespace std;

void repchar(char, int);

int main() {
    repchar('-', 43);
    cout << "Data type\tRange" << endl;
    repchar('=', 23);
    cout << "char\t\t" << CHAR_MIN << " to " << CHAR_MAX << endl;
    cout << "short\t\t" << SHRT_MIN << " to " << SHRT_MAX << endl;
    cout << "int\t\t" << INT_MIN << " to " << INT_MAX << endl;
    cout << "long\t\t" << LONG_MIN << " to " << LONG_MAX << endl;
    repchar('-', 43);
    return 0;
}

void repchar(char ch, int n) {
    for (int i = 0; i < n; i++) {
        cout << ch;
    }
    cout << endl;
}
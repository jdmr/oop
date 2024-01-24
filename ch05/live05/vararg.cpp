#include <iostream>

using namespace std;

void repchar(char, int);

int main() {
    char chin;
    int nin;

    cout << "Enter a character: ";
    cin >> chin;

    cout << "Enter an integer: ";
    cin >> nin;

    repchar(chin, nin);
    return 0;
}

void repchar(char ch, int n) {
    for (int i = 0; i < n; i++) {
        cout << ch;
    }
    cout << endl;
}
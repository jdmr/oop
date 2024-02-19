#include <iostream>
#include <string>
using namespace std;

int main() {
    char charray[80];
    string word;

    cout << "Enter a word: ";
    cin >> word;
    int wlen = word.length();

    cout << "One character at a time: ";
    for (int j = 0; j < wlen; j++) {
        cout << word.at(j);
    }

    cout << "One character at a time: ";
    for (int j = 0; j < wlen; j++) {
        cout << word.at(j);
        // cout << word[j]; // no warning if out-of-bounds
    }

    word.copy(charray, wlen, 0); // copy string into char array
    charray[wlen] = 0; // terminate with '\0'
    cout << "\nArray contains: " << charray << endl;

    return 0;
}


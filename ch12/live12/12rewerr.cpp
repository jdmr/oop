#include <fstream>
#include <iostream>
using namespace std;

const int MAX = 1000;
int buff[MAX];

int main() {
    for(int i = 0; i < MAX; i++) {
        buff[i] = i;
    }
    ofstream os;
    os.open("edata.dat", ios::trunc | ios::binary);
    if (!os) {
        cout << "Cannot open file." << endl;
        return 1;
    }
    cout << "Writing...\n";
    os.write(reinterpret_cast<char*>(buff), sizeof(buff));
    if (!os) {
        cout << "Cannot write to file." << endl;
        return 1;
    }
    os.close();

    for(int i = 0; i < MAX; i++) {
        buff[i] = 0;
    }

    ifstream is;
    is.open("edata.dat", ios::binary);
    if (!is) {
        cout << "Cannot open file." << endl;
        return 1;
    }
    cout << "Reading...\n";
    is.read(reinterpret_cast<char*>(buff), sizeof(buff));
    if (!is) {
        cout << "Cannot read from file." << endl;
        return 1;
    }
    is.close();

    for(int i = 0; i < MAX; i++) {
        if (buff[i] != i) {
            cout << "Data is incorrect." << endl;
            return 1;
        }
    }
    cout << "Data is correct." << endl;
    return 0;
}




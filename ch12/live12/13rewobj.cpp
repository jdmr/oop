#include <fstream>
#include <iostream>
using namespace std;
class person {
    protected:
        char name[80];
        int age;
    public:
        void getData() {
            cout << "Enter name: ";
            cin >> name;
            cout << "Enter age: ";
            cin >> age;
        }
        void showData() {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }
        void diskIn(int);
        void diskOut();
        static int diskCount();
};
void person::diskIn(int pn) {
    ifstream infile;
    infile.open("persfile.dat", ios::binary);
    infile.seekg(pn * sizeof(person));
    infile.read((char*)this, sizeof(*this));
}
void person::diskOut() {
    ofstream outfile;
    outfile.open("persfile.dat", ios::app | ios::binary);
    outfile.write((char*)this, sizeof(*this));
}
int person::diskCount() {
    ifstream infile;
    infile.open("persfile.dat", ios::binary);
    infile.seekg(0, ios::end);
    return (int)infile.tellg() / sizeof(person);
}
int main() {
    person p;
    char ch;
    do {
        cout << "Enter person data:" << endl;
        p.getData();
        p.diskOut();
        cout << "Enter another person (y/n)? ";
        cin >> ch;
    } while(ch == 'y');
    int n = person::diskCount();
    cout << "Number of persons in file: " << n << endl;
    for (int i = 0; i < n; i++) {
        cout << "Person " << i + 1 << ":" << endl;
        p.diskIn(i);
        p.showData();
    }
    cout << endl;
    return 0;
}





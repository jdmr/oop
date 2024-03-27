#include <fstream>
#include <iostream>
using namespace std;

class person {
    protected:
        char name[80];
        int age;
    public:
        void showData() {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }
};

int main() {
    person pers;
    ifstream infile("person.dat", ios::binary);
    infile.read(reinterpret_cast<char*>(&pers), sizeof(pers));
    pers.showData();
    return 0;
}



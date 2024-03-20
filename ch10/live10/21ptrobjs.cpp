#include <iostream>
using namespace std;

class person {
    private:
        char name[40];
    public:
        void setName(char* n) {
            strcpy(name, n);
        }
        void getName() const {
            cout << name;
        }
};

int main() {
    person* persPtr[100];
    int n = 0;
    char choice;
    do {
        persPtr[n] = new person;
        cout << "Enter person's name: ";
        char temp[40];
        cin >> temp;
        persPtr[n]->setName(temp);
        n++;
        cout << "Enter another (y/n)? ";
        cin >> choice;
    } while (choice == 'y');
    for (int j = 0; j < n; j++) {
        cout << "\nPerson number " << j + 1 << " is ";
        persPtr[j]->getName();
    }
    cout << endl;
    return 0;
}



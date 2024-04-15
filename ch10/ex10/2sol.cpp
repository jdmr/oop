#include <iostream>
#include <cstring>
using namespace std;

class String {
    private:
        char* str;
    public:
        String(char* s) {
            int length = strlen(s);
            str = new char[length + 1];
            strcpy(str, s);
        }
        ~String() {
            delete[] str;
        }
        void display() {
            cout << str << endl;
        }
        void upIt() {
            for (int i = 0; i < strlen(str); i++) {
                if (str[i] >= 'a' && str[i] <= 'z') {
                    str[i] -= 32;
                }
            }
        }
};

int main() {
    String s1 = "Who knows nothing doubts nothing.";
    cout << "s1 = ";
    s1.display();
    s1.upIt();
    cout << "s1 = ";
    s1.display();

    return 0;
}
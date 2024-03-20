#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char* str = "Idle hands are the devil's workshop.";
    int len = strlen(str);

    char* ptr; // pointer to a character
    ptr = new char[len + 1]; // set aside memory: string + '\0'
    strcpy(ptr, str); // copy string to new memory

    cout << "Original string: " << str << endl;
    cout << "Copy of string: " << ptr << endl;
    delete[] ptr; // release memory
    return 0;
}



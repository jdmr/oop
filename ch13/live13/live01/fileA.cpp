#include "fileH.h"
#include <iostream>
int someClass::memFunc(int a, int b) {
    return a + b;
};

int main() {
    someClass obj1;
    int var1 = obj1.memFunc(1, 2);
    std::cout << var1 << std::endl;
    return 0;
}

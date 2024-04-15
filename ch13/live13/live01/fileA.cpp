#include "fileH.h"
#include <iostream>

int main() {
    someClass obj1;
    int var1 = obj1.memFunc(1, 2);
    std::cout << var1 << std::endl;
    obj1.memFunc(1, 2);
    std::cout << var1 << std::endl;
    return 0;
}

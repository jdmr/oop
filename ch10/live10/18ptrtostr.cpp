#include <iostream>
using namespace std;
const int DAYS = 7;

int main() {
    char* arrptrs[DAYS] = {
        "Sunday", "Monday", "Tuesday", "Wednesday",
        "Thursday", "Friday", "Saturday"
    };
    for (int j = 0; j < DAYS; j++) {
        cout << arrptrs[j] << endl;
    }
    return 0;
}



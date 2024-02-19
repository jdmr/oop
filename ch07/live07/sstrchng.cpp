#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1("Quick! Send for Count Graystone.");
    string s2("Lord");
    string s3("Don't");

    s1.erase(0, 7); // Erase "Quick! "
    s1.replace(9, 5, s2); // Replace "Count" with "Lord"
    s1.replace(0, 1, "s"); // Replace "S" with "s"
    s1.insert(0, s3 + " "); // Insert "Don't " at the beginning
    s1.erase(s1.size() - 1, 1); // Erase the period
    s1.append(3, '!'); // Append "!!!" to the end

    int x = s1.find(' '); // Find the first space
    while (x < s1.size()) {
        s1.replace(x, 1, "/"); // Replace spaces with slashes
        x = s1.find(' '); // Find the next space
    }

    cout << "s1:" << s1 << endl;

    return 0;
}


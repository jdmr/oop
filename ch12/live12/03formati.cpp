#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    char ch;
    int j;
    double d;
    string str1, str2;

    ifstream infile("fdata.txt");

    infile >> ch >> j >> d >> str1 >> str2;

    cout << "Here are the contents of the file fdata.txt:\n";
    cout << ch << ' ' << j << ' ' << d << ' ' 
    << str1 << ' ' << str2 << endl;
    return 0;
}




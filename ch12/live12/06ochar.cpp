#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Time is a great teacher, but unfortunately "
                 "it kills all its pupils. Berlioz";
    ofstream outfile("test2.txt");
    for (int i = 0; i < str.size(); i++) {
        outfile.put(str[i]);
    }
    return 0;
}




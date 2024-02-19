#include <iostream>
#include <cstring>
using namespace std;

class part {
private:
    char partname[30];
    int partnumber;
    double cost;
public:
    void setpart(char pname[], int pnum, double c) {
        strcpy(partname, pname);
        partnumber = pnum;
        cost = c;
    }
    void showpart() {
        cout << "Part name: " << partname << endl;
        cout << "Part number: " << partnumber << endl;
        cout << "Part cost: " << cost << endl;
    }
};

int main() {
    part part1, part2;

    part1.setpart("handle bolt", 4473, 217.55);
    part2.setpart("start lever", 9924, 419.25);

    cout << "Part 1: " << endl;
    part1.showpart();
    cout << endl;
    cout << "Part 2: " << endl;
    part2.showpart();

    return 0;
}


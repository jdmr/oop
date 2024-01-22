#include <iostream>

struct Distance {
    int feet;
    float inches;
};

struct Room {
    Distance length;
    Distance width;
};

int main() {
    using namespace std;
    Room dining;
    dining.length.feet = 13;
    dining.length.inches = 6.5;
    dining.width.feet = 10;
    dining.width.inches = 0.0;

    float l = dining.length.feet + dining.length.inches / 12.0;
    float w = dining.width.feet + dining.width.inches / 12.0;
    cout << "Dining room area is " << l * w << " square feet." << endl;

    return 0;
}
#include <iostream>

using namespace std;

float lbstokg(float lbs);

int main() {
    float lbs,kgs;

    cout << "Enter your weight in pounds: ";
    cin >> lbs;
    kgs = lbstokg(lbs);
    cout << "Your weight in kilograms is " << kgs << endl;

    return 0;
}

float lbstokg(float lbs) {
    float kilograms = 0.453592 * lbs;
    return kilograms;
}
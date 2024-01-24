#include <iostream>

using namespace std;

inline float lbsToKg(float lbs) {
    float kilograms = 0.453592 * lbs;
    return kilograms;
}

int main() {
    float lbs,kgs;

    cout << "Enter your weight in pounds: ";
    cin >> lbs;
    kgs = lbsToKg(lbs);
    cout << "Your weight in kilograms is " << kgs << endl;

    return 0;
}
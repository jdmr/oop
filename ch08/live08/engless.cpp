#include <iostream>
using namespace std;

class Distance {
    private:
        int feet;
        float inches;
    public:
        Distance() : feet(0), inches(0.0) { }
        Distance(int ft, float in) : feet(ft), inches(in) { }
        void getdist() {
            cout << "\nEnter feet: "; cin >> feet;
            cout << "Enter inches: "; cin >> inches;
        }
        void showdist() const {
            cout << feet << "\'-" << inches << '\"';
        }
        bool operator < (Distance) const;
};

bool Distance::operator < (Distance d2) const {
    float bf1 = feet + inches/12;
    float bf2 = d2.feet + d2.inches/12;
    return (bf1 < bf2) ? true : false;
}

int main() {
    Distance dist1;
    dist1.getdist();

    Distance dist2(6, 2.5);

    cout << "\ndist1 = "; dist1.showdist(); cout << endl;
    cout << "\ndist2 = "; dist2.showdist(); cout << endl;

    if (dist1 < dist2) {
        cout << "dist1 is less than dist2\n";
    } else {
        cout << "dist1 is greater than or equal to dist2\n";
    }
    
    return 0;
}


#include <iostream>
using namespace std;

const int LIMIT = 100;

class safearay {
    private:
        int arr[LIMIT];
        
    public:
        class OutOfBound{};
        int& operator[](int n) {
            if (n < 0 || n >= LIMIT) throw OutOfBound();
            return arr[n];
        }
};
int main(){
try{
    safearay sa1;
    for (int i = 0; i < LIMIT; i++) {
        sa1[i] = i * 10;
    }

    for (int j = 0; j<LIMIT; j++) {
        int temp = sa1[j];
        cout << "Element " << j << " is " << temp << endl;
    }

    return 0;
} catch (safearay::OutOfBound) {
    cout << "Index out of bounds" << endl;
    return 1;
}
}
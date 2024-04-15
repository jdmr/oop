#include <iostream>
using namespace std; 

template <class T>
T amax (T* arr, int size) {
    T max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int arr1[] = {15, 26, 13, 74, 15};
    double arr2[] = {16.1, 12.2, 73.3, 54.4, 65.5};
    float arr3[] = {16.1, 12.2, 73.3, 54.4, 65.5};
    cout << "Max of arr1: " << amax(arr1, 5) << endl;
    cout << "Max of arr2: " << amax(arr2, 5) << endl;
    cout << "Max of arr3: " << amax(arr3, 5) << endl;
    return 0;
}




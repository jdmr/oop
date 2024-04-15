#include <iostream>
using namespace std;

const int LIMIT = 5;

class safearay
{
private:
    int arr[LIMIT];

public:
    class OutOfBound
    { 
        public:
        string message = "Index out of bounds";
        
        OutOfBound(string msg): message(msg) {     
        }

    };
    int &operator[](int n)
    {
        if (n < 0 || n >= LIMIT)
            throw OutOfBound(
                "Index out of bounds: " 
                + to_string(n) 
                + " is greater than " 
                + to_string(LIMIT - 1));
        return arr[n];
    }
};
int main()
{
    try
    {
        safearay sa1;
        for (int i = 0; i < LIMIT; i++)
        {
            sa1[i] = i * 10;
        }

        for (int j = 0; j < LIMIT+1; j++)
        {
            int temp = sa1[j];
            cout << "Element " << j << " is " << temp << endl;
        }

        return 0;
    }
    catch (safearay::OutOfBound ob)
    {
        cout << ob.message << endl;
        return 1;
    }
}
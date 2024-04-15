#include <iostream>
using namespace std;

int main()
{
    float  *ar[10];
    int n = 0;
    char ch;

    do
    {
        cout << "Provide a float" << endl;
        cin >> (*ar)[n++];
        cout << "Do you want to continue? (y/n)" << endl;
        cin >> ch;


    } while (ch == 'y' && n < 10);
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += (*ar)[i];

    } 
    float avg = sum / n;
    cout << "The average is " << avg << endl;
    return 0;
    

}
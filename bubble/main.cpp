#include <iostream>

using std::cout;
using std::endl;
using std::string;

void bubbleSort(int arr[],int n);

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);

    bubbleSort(arr,n);

    cout << "Sorted array: \n";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

void bubbleSort(int arr[],int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                std::swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false)
        {
            break;
        }
    }
}

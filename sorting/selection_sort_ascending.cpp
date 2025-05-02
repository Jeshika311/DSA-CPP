#include <iostream>
using namespace std;

void SelectionSort(int arr[], int sz)
{
    for (int i = 0; i < sz; i++)
    {
        int SmallerIdx = i;
        for (int j = i + 1; j < sz; j++)
        {
            if (arr[j] < arr[SmallerIdx])
            {
                SmallerIdx = j;
            }
        }
        swap(arr[i], arr[SmallerIdx]);
    }
}

void display(int arr[], int sz)
{
    for (int i = 0; i < sz; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int sz;
    cout << "Enter number of elements you want to add in your array : ";
    cin >> sz;

    int arr[sz];

    cout << "Enter array elements seperated by spaces : ";

    for (int i = 0; i < sz; i++)
    {
        cin >> arr[i];
    }

    SelectionSort(arr, sz);
    display(arr, sz);

    return 0;
}
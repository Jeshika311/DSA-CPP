#include <iostream>
using namespace std;

void BubbleSort(int arr[], int sz)
{
    for (int i = 0; i < sz - 1; i++)
    {
        for (int j = 0; j < sz - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void displayArray(int arr[], int sz)
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
    cout << "Enter number of elements you want to sort : ";
    cin >> sz;

    int arr[sz];

    cout << "Enter array elements seperated by spaces : ";
    for (int i = 0; i < sz; i++)
    {
        cin >> arr[i];
    }

    BubbleSort(arr, sz);
    displayArray(arr, sz);

    return 0;
}
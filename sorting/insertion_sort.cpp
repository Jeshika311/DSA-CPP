#include <iostream>
using namespace std;

void InsertionSort(int arr[], int sz)
{
    for (int i = 1; i < sz; i++)
    {
        int current = arr[i];
        int previous = i - 1;

        while (previous >= 0 && arr[previous] > current)
        {
            arr[previous + 1] = arr[previous];
            previous--;
        }
        arr[previous + 1] = current;
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

    InsertionSort(arr, sz);
    display(arr, sz);

    return 0;
    
}
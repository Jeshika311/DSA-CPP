#include <iostream>
using namespace std;

int MaxValue(int arr[], int sz)
{
    int max = arr[0];
    for (int i = 0; i < sz; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int MinValue(int arr[], int sz)
{
    int min = arr[0];
    for (int i = 0; i < sz; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

void SwapValue(int &max, int &min)
{
    return swap(max, min);
}

int main()
{
    int arr[] = {8, 4, 9, 6, 9, 7, 34, 10};
    int sz = sizeof(arr) / sizeof(arr[0]);

    int max = MaxValue(arr, sz);
    int min = MinValue(arr, sz);

    cout << "Before Swapping :- " << endl;
    cout << "Maximum value : " << max << endl;
    cout << "Minimum value : " << min << endl;

    SwapValue(max, min);

    cout << "\nAfter Swapping :- " << endl;
    cout << "Maximum value : " << max << endl;
    cout << "Minimum value : " << min << endl;

    
    return 0;
}
#include <iostream>
using namespace std;

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

int linearSearch(int arr[], int sz, int min)
{
    for (int i = 0; i < sz; i++)
    {
        if (arr[i] == min)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {86, 48, 9, 56, 93, 76, 34, 90};
    int sz = sizeof(arr) / sizeof(arr[0]);
    int min = MinValue(arr, sz);

    cout << "Smallest Value : " << MinValue(arr, sz) << endl;
    cout << "Index : " << linearSearch(arr, sz, min) << endl;
    return 0;
}
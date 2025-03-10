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

int linearSearch(int arr[], int sz, int max)
{
    for (int i = 0; i < sz; i++)
    {
        if (arr[i] == max)
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
    int max = MaxValue(arr, sz);
    cout << "Largest number : " << MaxValue(arr, sz) << endl;
    cout << "Index : " << linearSearch(arr, sz, max) << endl;
    return 0;
}
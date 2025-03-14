#include <iostream>
using namespace std;

int linearSearch(int arr[], int sz, int target)
{
    for (int i = 0; i < sz; i++)
    {
        if (arr[i] == target)
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
    int target = 93;

    cout << "Index of Target element is : ";
    cout << linearSearch(arr, sz, target) << endl;
    return 0;
}
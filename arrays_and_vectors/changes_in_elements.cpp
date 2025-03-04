//Given an array of integers, change the value of all odd indexed elements to its second multiple and increment all even indexed values by 10.

#include <iostream>
#include<vector>
    using namespace std;

int OddEven(vector <int> &arr, int sz)
{
    for (int i = 0; i < sz; i++)
    {
        if (i % 2 == 0)
        {
            arr[i] *= 2;
        }
        if (i % 2 != 0)
        {
            arr[i] += 10;
        }
    }
    return 0;
}

int main()
{

    int sz;
    cout << "Enter number of elements you want to add in your array : ";
    cin >> sz;

    vector <int> arr(sz);

    cout << "Enter elements of array : ";
    for (int i = 0; i < sz; i++)
    {
        cin >> arr[i];
    }

    OddEven(arr, sz);

    for (int i = 0; i < sz; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
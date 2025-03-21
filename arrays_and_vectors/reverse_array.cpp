// Reverse array with the help of two pointer approach

#include <iostream>
#include <vector>
using namespace std;

void ReverseArray(vector <int> arr, int sz)
{
    int start = 0, end = sz - 1;

    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    vector <int> arr = {86, 48, 9, 56, 93, 76, 34, 90};
    int sz = arr.size();

    ReverseArray(arr, sz);

    cout << "Reversed Array : ";

    for (int i = 0; i < sz; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
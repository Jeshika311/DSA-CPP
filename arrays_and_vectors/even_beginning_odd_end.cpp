#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
    int sz = arr.size();
    int start = 0;
    int end = sz - 1;

    for (int i = 0; i < sz; i++)
    {
        while (start < end)
        {
            if (arr[end] % 2 == 0 && arr[start] % 2 == 1)
            {
                swap(arr[start], arr[end]);
                start++;
                end--;
            }
            if (arr[start] % 2 == 0)
            {
                start++;
            }
            if (arr[end] % 2 == 1)
            {
                end--;
            }
        }
    }

    for (int val : arr)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
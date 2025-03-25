#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> arr = {1, 0, 1, 0, 0, 1, 1, 0};
    int sz = arr.size();

    for (int i = 0; i < sz; i++)
    {
        int start = 0;
        int end = sz - 1;

        while (start < end)
        {
            if (arr[start] == 1 && arr[end] == 0)
            {
                swap(arr[start], arr[end]);
                start++;
                end--;
            }
            if (arr[start] == 0)
            {
                start++;
            }
            if (arr[end] == 1)
            {
                end--;
            }
        }
    }

    for (int i = 0; i < sz; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
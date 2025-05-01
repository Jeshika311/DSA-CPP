#include <iostream>
#include <vector>
using namespace std;

void PushZeroes(vector<int> &arr)
{
    int sz = arr.size();
    int j = 0;

    for (int i = 0; i < sz; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main()
{
    vector<int> arr = {1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0, 9};

    PushZeroes(arr);

    cout << "Updated array : ";
    for (int num : arr)
    {
        cout << num << " ";
    }
    return 0;
}
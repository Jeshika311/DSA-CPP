#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    vector<int> arr = {-6, -2, 1, 3, 4, 5};
    int sz = arr.size();

    for (int i = 0; i < sz; i++)
    {
        arr[i] = arr[i] * arr[i];
    }

    sort(arr.begin(), arr.end());

    for (int val : arr)
    {
        cout << val << " ";
    }

    return 0;
}
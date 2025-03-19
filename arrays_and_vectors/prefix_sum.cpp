#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
    int sz = arr.size();

    for (int i = 1; i < sz; i++)
    {
        arr[i] = arr[i] + arr[i - 1];
    }
    for (int val : arr)
    {
        cout << val << " ";
    }
    return 0;
}
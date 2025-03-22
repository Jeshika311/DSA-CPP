#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    vector<int> arr = {1, 2, 3, 4, 5};
    int sz = arr.size();
    int k = 2;
    k = k % sz;

    reverse(arr.begin(), arr.end());
    reverse(arr.begin(), arr.begin() + k);
    reverse(arr.begin() + k, arr.end());

    for (int val : arr)
    {
        cout << val << " ";
    }

    return 0;
}
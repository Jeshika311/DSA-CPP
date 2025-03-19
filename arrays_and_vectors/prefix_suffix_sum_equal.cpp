#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool PrefixSuffixSum(vector<int> arr)
{
    int sz = arr.size();
    int total_sum = 0;
    int suffix_sum = 0;
    int prefix_sum = 0;

    for (int i = 0; i < sz; i++)
    {
        total_sum += arr[i];
    }
    for (int i = 0; i < sz; i++)
    {
        prefix_sum += arr[i];

        suffix_sum = total_sum - prefix_sum;

        if (prefix_sum == suffix_sum)
        {
            return true;
        }
    }
    return false;
}

int main()
{

    vector<int> arr = {4, 3, 6, 8, 3, 2};

    if (PrefixSuffixSum(arr))
    {
        cout << "ture";
    }
    if (!PrefixSuffixSum(arr))
    {
        cout << "false";
    }
    return 0;
}
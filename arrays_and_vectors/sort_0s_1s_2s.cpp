#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    vector<int> nums = {2, 0, 2, 1, 1, 0};
    int sz = nums.size();

    for (int i = 0; i < sz - 1; i++)
    {
        for (int j = 0; j < sz - i - 1; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                swap(nums[j], nums[j + 1]);
            }
        }
    }

    cout << "Sorted array : ";

    for (int i = 0; i < sz; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
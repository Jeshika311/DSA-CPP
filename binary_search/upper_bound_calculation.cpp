// If X is present, it returns the index of the first element greater than X.
// If X is not present, it returns the index where X could be inserted while keeping the array sorted.

#include <iostream>
#include <vector>
using namespace std;

int upperBound(vector<int> &nums, int target)
{
    int st = 0, end = nums.size();
    int ans = end;

    while (st < end)
    {
        int mid = st + (end - st) / 2;

        if (nums[mid] > target)
        {
            ans = mid; // Possible upper bound found
            end = mid;
        }
        else
        {
            st = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {1, 3, 3, 5, 8, 8, 10};
    int target = 8;

    int ub = upperBound(nums, target);
    cout << "Upper Bound of " << target << " is at index: " << ub << endl;

    return 0;
}
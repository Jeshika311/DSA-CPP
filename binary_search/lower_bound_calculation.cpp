// If arr[mid] is greater than or equal to X, move the end pointer to mid (since the lower bound must be to the left or at mid).
// Otherwise, move start to mid + 1 (since mid is definitely smaller than X).

#include <iostream>
#include <vector>
using namespace std;

int lowerBound(vector<int> &nums, int target)
{
    int st = 0, end = nums.size();
    int ans = end;

    while (st < end)
    {
        int mid = st + (end - st) / 2;

        if (nums[mid] > target)
        {
            ans = mid;
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

    int lb = lowerBound(nums, target);
    cout << "Lower Bound of " << target << " is at index: " << lb << endl;

    return 0;
}
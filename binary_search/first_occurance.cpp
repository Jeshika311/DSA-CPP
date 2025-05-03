#include <iostream>
#include <vector>
using namespace std;

int first(vector<int> nums, int target)
{
    int st = 0, end = nums.size() - 1;
    int first = -1;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (nums[mid] == target)
        {
            first = mid;
            end = mid - 1;
        }
        else if (nums[mid] < target)
        {
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return first;
}

int main()
{

    vector<int> nums = {5, 6, 7, 8, 10, 10};
    int target = 10;

    int ans = first(nums, target);
    cout << "First occurance of " << target << " is : " << ans << endl;

    return 0;
}
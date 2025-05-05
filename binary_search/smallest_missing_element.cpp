#include <iostream>
#include <vector>
using namespace std;

int SmallestMissing(vector<int> nums)
{
    if(nums[0] != 0) return 0;

    int st = 0, end = nums.size() - 1;

    while (st < end)
    {
        int mid = st + (end - st) / 2;
        if (nums[mid] == mid)
        {
            st = mid+1;
        }
        else
        {
            end = mid;
        }
    }
    return st;
}

int main()
{

    vector<int> nums = {0, 1, 3, 4, 5};

    int ans = SmallestMissing(nums);
    cout << "Smallest Missing positive element is : " << ans << endl;

    return 0;
}
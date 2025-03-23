#include <iostream>
#include <vector>
using namespace std;

int SingleNum(vector<int> &nums)
{
    int ans = 0;

    for (int val : nums)
    {
        ans ^= val;
    }
    return ans;
}

int main()
{

    int sz;
    cout<<"Enter number of elements you want to add in your array : ";
    cin>>sz;

    vector<int> nums(sz);

    cout<<"Enter array elements : ";

    for (int i = 0; i < sz; i++)
    {
        cin >> nums[i];
    }

    cout << "Single Number : " << SingleNum(nums) << endl;

    return 0;
}
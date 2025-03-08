#include <iostream>
#include <vector>
using namespace std;

int linearSearch(vector<int> &arr, int sz, int target)
{
    for (int i = 1; i < sz; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int sz;
    cout << "Enter the number of elements you want in your array : ";
    cin >> sz;
    vector<int> nums(sz);

    cout << "Enter array elements seperated by spaces : ";
    
    for (int i = 0; i < sz; i++)
    {
        cin >> nums[i];
    }

    int target;
    cout << "Enter element you want to find : ";
    cin >> target;

    cout << "Index of element you want to find : " << linearSearch(nums, sz, target) << endl;

    return 0;
}
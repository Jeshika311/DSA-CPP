#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int idx = m + n - 1, i = m - 1, j = n - 1;

    while (i >= 0 && j >= 0)
    {
        if (nums1[i] >= nums2[j])
        {
            nums1[idx--] = nums1[i--];
        }
        else
        {
            nums1[idx--] = nums2[j--];
        }
    }
    while (j >= 0)
    {
        nums1[idx--] = nums2[j--];
    }
}

int main()
{
    vector<int> arr1 = {86, 48, 9, 56, 93, 0, 0, 0, 0, 0};
    vector<int> arr2 = {11, 2, 31, 4, 52};
    int m = 5;
    int n = arr2.size();

    sort(arr1.begin(), arr1.begin() + m);
    sort(arr2.begin(), arr2.end());

    merge(arr1, m, arr2, n);

    for (int i = 0; i < m + n; i++)
    {
        cout << arr1[i] << " ";
    }

    return 0;
}
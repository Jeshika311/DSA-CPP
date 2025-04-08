#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> fourSum(vector<int> &nums, int target)
{
    vector<vector<int>> ans;
    int n = nums.size();

    sort(nums.begin(), nums.end());

    for (int i = 0; i < n; i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
            continue; // Skip duplicate i

        for (int j = i + 1; j < n; j++)
        {
            if (j > i + 1 && nums[j] == nums[j - 1])
                continue; // Skip duplicate j

            int p = j + 1, q = n - 1;

            while (p < q)
            {
                long long sum = (long long)nums[i] + (long long)nums[j] + (long long)nums[p] + (long long)nums[q];

                if (sum < target)
                {
                    p++;
                }
                else if (sum > target)
                {
                    q--;
                }
                else
                {
                    ans.push_back({nums[i], nums[j], nums[p], nums[q]});
                    p++;
                    q--;

                    while (p < q && nums[p] == nums[p - 1])
                        p++; // Skip duplicate p
                    while (p < q && nums[q] == nums[q + 1])
                        q--; // Skip duplicate q
                }
            }
        }
    }
    return ans;
}

int main()
{
    // Example input
    vector<int> nums = {1, 0, -1, 0, -2, 2};
    int target = 0;

    // Call the fourSum function
    vector<vector<int>> result = fourSum(nums, target);

    // Print the results
    cout << "Quadruplets that sum to " << target << " are:" << endl;
    for (const vector<int> &quadruplet : result)
    {
        cout << "[ ";
        for (int num : quadruplet)
        {
            cout << num << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}
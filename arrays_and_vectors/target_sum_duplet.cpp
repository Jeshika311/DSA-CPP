#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> arr = {3, 4, 1, 7, 6};
    int sz = arr.size();
    int target = 7;
    int pairs = 0;

    for (int i = 0; i < sz; i++)
    {
        for (int j = i + 1; j < sz; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                pairs++;
            }
        }
    }
    cout << "Total pairs : " << pairs << endl;
    return 0;
}
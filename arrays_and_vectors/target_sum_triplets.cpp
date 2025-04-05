#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> arr = {1, 2, 3, 4, 6, 0};
    int sz = arr.size();
    int target = 5;
    int triplets = 0;

    for (int i = 0; i < sz; i++)
    {
        for (int j = i + 1; j < sz; j++)
        {
            for (int k = j + 1; k < sz; k++)
            {
                if (arr[i] + arr[j] + arr[k] == target)
                {
                    triplets++;
                }
            }
        }
    }
    cout << "Total Triplets : " << triplets << endl;
    return 0;
}
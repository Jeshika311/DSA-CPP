#include <iostream>
#include<vector>
using namespace std;

int MaxValue(vector <int> arr, int sz)
{
    int maximum = arr[0];
    for (int i = 0; i < sz; i++)
    {
        if (arr[i] > maximum)
        {
            maximum = arr[i];
        }
    }
    return maximum;
}

int main()
{
    vector <int> arr = {86, 48, 9, 56, 93, 76, 34, 90};
    int sz = arr.size();
    int max = MaxValue(arr, sz);

    cout << "Maximum Value : " << max << endl;

    int maximum2 = arr[0];

    for (int i = 0; i < sz; i++)
    {
        if (arr[i] > maximum2 && arr[i] < max)
        {
            maximum2 = arr[i];
        }
    }
    cout << "2nd largest element : " << maximum2 << endl;
    return 0;
}
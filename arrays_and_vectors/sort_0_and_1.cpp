#include <iostream>
#include <vector>
using namespace std;

void Sort(vector<int> &arr)
{
    int sz = arr.size();
    int zeroes = 0;

    for (int ele : arr)
    {
        if (ele == 0)
        {
            zeroes++;
        }
    }

    for (int i = 0; i < sz; i++)
    {
        if (i < zeroes)
        {
            arr[i] = 0;
        }
        else
        {
            arr[i] = 1;
        }
    }
}

int main()
{

    vector<int> arr = {1, 1, 0, 1, 0, 0, 1, 0};

    Sort(arr);

    for (int val : arr)
    {
        cout << val << " ";
    }

    cout << endl;
}
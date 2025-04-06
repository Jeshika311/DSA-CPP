#include <iostream>
using namespace std;

void unique(int arr[], int sz)
{

    for (int i = 0; i < sz; i++)
    {
        int count = 0;

        for (int j = 0; j < sz; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count == 1)
        {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main()
{

    int arr[] = {86, 90, 9, 56, 9, 76, 34, 90};
    int sz = sizeof(arr) / sizeof(arr[0]);
    cout << "Unique values : ";
    unique(arr, sz);
    return 0;
}
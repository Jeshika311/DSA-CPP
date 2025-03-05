#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr1 = {1, 2, 3, 4, 5, 6, 7, 8};
    int sz = arr1.size();

    vector<int> arr2;

    for (int i = sz - 1; i >= 0; i--)
    {
        arr2.push_back(arr1[i]);
    }

    cout<<"Reversed Array : ";
    for (int i = 0; i < sz; i++)
    {
        cout << arr2[i] << " ";
    }
    return 0;
}
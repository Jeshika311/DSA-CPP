#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    vector<int> arr;

    int sz;
    cout << "Enter number of elements you want in your array : ";
    cin >> sz;

    cout << "Enter array elements seperated by spaces : ";

    for (int i = 1; i < sz; i++)
    {
        int num;
        cin >> num;
        arr.push_back(num);
    }

    sort(arr.begin(), arr.end());

    int n = arr.size();

    cout << "Largest 3 elements : ";
    cout << arr[n - 3] << " " << arr[n - 2] << " " << arr[n - 1];

    return 0;
}
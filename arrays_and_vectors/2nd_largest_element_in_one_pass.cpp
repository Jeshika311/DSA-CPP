#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    int sz;
    cout << "Enter number of elements you want to add in your array : ";
    cin >> sz;

    vector<int> arr(sz);

    cout << "Enter array elements seperated by spaces : ";

    for (int i = 1; i < sz; i++)
    {
        int num;
        cin >> num;
        arr.push_back(num);
    }

    sort(arr.begin(), arr.end());

    int n = arr.size();

    cout << "Second largest element : " << arr[n - 2];
    return 0;
}
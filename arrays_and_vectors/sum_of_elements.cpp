#include <iostream>
#include <vector>
using namespace std;

int SumOfArray(vector <int> arr, int sz)
{
    int sum = 0;
    for (int i = 0; i < sz; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    vector <int> arr = {1, 2, 3, 4, 5, 6, 7};
    int sz = arr.size();
    cout << "Sum of array : " << SumOfArray(arr, sz) << endl;
    return 0;
}
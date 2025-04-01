#include <iostream>
#include <vector>
using namespace std;

int OddEvenSum(vector <int> arr, int sz)
{
    int odd = 0;
    int even = 0;

    for (int i = 0; i < sz; i++)
    {
        if (i % 2 == 0)
        {
            odd += arr[i];
        }
        if (i % 2 != 0)
        {
            even += arr[i];
        }
    }
    cout << "Sum of numbers at odd indices : " << odd << endl;
    cout << "Sum of numbers at even indices : " << even << endl;

    if (odd > even)
    {
        return odd - even;
    }
    else
    {
        return even - odd;
    }
}

int main()
{
    int sz;
    cout<<"Enter number of elements you want to add in your array : ";
    cin>>sz;

    vector <int> arr(sz);

    cout<<"Enter elements of array : ";
    for(int i=0; i<sz;  i++){
        cin>>arr[i];
    }

    cout << "Difference : " << OddEvenSum(arr, sz) << endl;

    return 0;
}
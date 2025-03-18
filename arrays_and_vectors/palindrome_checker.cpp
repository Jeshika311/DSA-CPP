#include <iostream>
#include <vector>
using namespace std;

bool isPalindrome(vector <int> arr, int sz)
{
    int start = 0, end = sz - 1;

    while (start < end)
    {
        if (arr[start] != arr[end])
        {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main()
{

    int sz;
    cout << "Enter number of elements you want to add in your array : ";
    cin >> sz;

    vector <int> arr(sz);

    cout << "Enter Array elements : ";
    for (int i = 0; i < sz; i++)
    {
        cin >> arr[i];
    }

    if (isPalindrome(arr, sz))             //Check palindrome or not
    {
        cout << "Given array is palindome" << endl;
    }
    else
    {
        cout << "Given array is not palindome" << endl;
    }

    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int sz;
    cout << "Enter number of elements you want in your array : ";
    cin >> sz;

    vector <int> arr(sz);
    cout << "Enter elements of array : ";
    for (int i = 0; i < sz; i++)
    {
        cin >> arr[i];
    }

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
            cout << "First non repeating element : " << arr[i]<< endl;
            break;
        }
    }
    return 0;
}
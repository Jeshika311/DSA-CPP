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

    cout << "Enter elements of array seperated by spaces : ";

    for (int i = 0; i < sz; i++)
    {
        cin >> arr[i];
    }

    cout << "Duplicate elements: ";
    bool found = false;

    for (int i = 0; i < sz; i++)
    {
        for (int j = i + 1; j < sz; j++)      // Start from i+1 to avoid self-comparison
        {
            if (arr[i] == arr[j])
            {
                cout<<arr[i]<<" ";
                found = true;
                break;
            }
        }
    }
    if(!found){
        cout<<"No duplicates found";
    }
    return 0;
}
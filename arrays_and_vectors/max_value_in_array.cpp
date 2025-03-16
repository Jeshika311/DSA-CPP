#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> arr = {76, 94, 90, 5, 33, 67, 54, 7, 3, 97, 4};
    int sz = arr.size();
    int max = arr[0];

    for (int i = 1; i < sz; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "Largest value : " << max << endl;
}
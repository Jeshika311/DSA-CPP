#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector <int> arr = {45, 89, 67, 5, -7, 54, 0};
    int sz = arr.size();

    int min = arr[0];

    for (int i = 0; i < sz; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "Smallest Value : " << min << endl;
}
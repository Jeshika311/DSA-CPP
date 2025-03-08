#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector <int> arr = {1, 2, 3, 4, 6, 7, 8};
    int sz = arr.size();
    int expected = 1;

    for (int i = 0; i < sz; i++)
    {
        if (arr[i] != expected)
        {
            cout << "Missing element : " << expected << endl;
            break;
        }
        expected++;
    }
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> arr = {8, 4, 9, 6, 9, 7, 34, 10};
    int sz = arr.size();
    int product = 1;

    for (int i = 0; i < sz; i++)
    {
        product *= arr[i];
    }
    cout << "Product : " << product << endl;
    return 0;
}
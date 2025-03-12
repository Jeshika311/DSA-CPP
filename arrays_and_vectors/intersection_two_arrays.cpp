#include <iostream>
#include <vector>
using namespace std;

void Intersection(vector <int> &arr1, vector <int> &arr2 , int sz_arr1, int sz_arr2)
{

    for (int i = 0; i < sz_arr1; i++)
    {
        for (int j = 0; j < sz_arr2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr1[i] << " ";
                break;
            }
        }
    }
    cout << endl;
}

int main()
{
    vector <int> arr1 = {86, 48, 9, 56, 93, 76, 34, 90};
    vector <int> arr2 = {86, 71, 9, 56, 99, 61, 34, 90};
    int sz_arr1 = arr1.size();
    int sz_arr2 = arr2.size();

    cout << "Intersection : ";
    Intersection(arr1, arr2, sz_arr1, sz_arr2);

    return 0;
}
// Given a square matrix , turn it by 90 degrees in a clockwise direction without using an extra space.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void reverseArray(vector<vector<int>> &vec, int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(vec[i][j], vec[j][i]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        reverse(vec[i].begin(), vec[i].end());
    }
}

int main()
{

    int n;
    cout << "Enter number of rows or column : ";
    cin >> n;

    vector<vector<int>> vec(n, vector<int>(n));

    cout << "Enter array elements : ";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> vec[i][j];
        }
    }

    reverseArray(vec, n);

    cout << "Rotated array : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }
}
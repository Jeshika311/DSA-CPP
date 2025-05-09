#include <iostream>
#include <vector>
using namespace std;

int LeftMostOneRow(vector<vector<int>> &v)
{

    int LeftMostOne = -1;
    int MaxOnesRow = -1;
    int j = v[0].size() - 1;

    while (j >= 0 && v[0][j] == 1)
    {
        LeftMostOne = j;
        MaxOnesRow = 0;
        j--;
    }

    for (int i = 1; i < v.size(); i++)
    {
        while (j >= 0 && v[i][j] == 1)
        {
            LeftMostOne = j;
            j--;
            MaxOnesRow = i;
        }
    }
    return MaxOnesRow;
}

int main()
{

    int n, m;

    cout << "Enter number of rows : ";
    cin >> n;

    cout << "Enter number of columns : ";
    cin >> m;

    vector<vector<int>> vec(n, vector<int>(m));

    cout << "Enter array elements : ";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> vec[i][j];
        }
    }

    int result = LeftMostOneRow(vec);
    cout << "Row " << result << " having maximum number of ones.";

    return 0;
}
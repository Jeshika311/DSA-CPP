#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

int MaxOnesRow(vector<vector<int>> &v)
{
    int MaxOnes = INT_MIN;
    int MaxOneRow = -1;
    int columns = v[0].size();

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            if (v[i][j] == 1)
            {
                int NumOfOnes = columns - j;
                if (NumOfOnes > MaxOnes)
                {
                    MaxOnes = NumOfOnes;
                    MaxOneRow = i;
                }
            }
        }
    }
    return MaxOneRow;
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

    int result = MaxOnesRow(vec);
    cout << "Row " << result << " has maximum number of ones" << endl;

    return 0;
}
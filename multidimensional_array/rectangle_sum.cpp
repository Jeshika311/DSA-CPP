#include <iostream>
#include <vector>
using namespace std;

int rectangleSum(vector<vector<int>> &matrix, int l1, int r1, int l2, int r2)
{

    int sum = 0;
    for (int i = l1; i <= l2; i++)
    {
        for (int j = r1; j <= r2; j++)
        {
            sum += matrix[i][j];
        }
    }
    return sum;
}

int main()
{

    int n, m;

    cout << "Enter number of rows : ";
    cin >> n;

    cout << "Enter number of columns : ";
    cin >> m;

    vector<vector<int>> matrix(n, vector<int>(m));

    cout << "Enter array elements : ";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }

    int l1, r1, l2, r2;

    cout << "Enter l1,r1 : ";
    cin >> l1 >> r1;

    cout << "Enter l2,r2 : ";
    cin >> l2 >> r2;

    cout << "\nGiven Matrix : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    int sum2 = rectangleSum(matrix, l1, r1, l2, r2);
    cout << "\nSum : " << sum2 << endl;

    return 0;
}

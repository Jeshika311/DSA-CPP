#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter number of rows : ";
    cin >> n;

    int m;
    cout << "Enter number of columns : ";
    cin >> m;

    int arr[n][m];

    cout << "Enter elements of matrix : ";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    int transpose[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            transpose[i][j] = arr[j][i];
        }
    }

    cout << "\nOriginal Matrix : " << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Matrix after transpose : " << endl;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
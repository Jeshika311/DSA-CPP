#include <iostream>
using namespace std;

int main()
{

    int r1, c1;

    cout << "Enter number of rows of 1st matrix : ";
    cin >> r1;

    cout << "Enter number of columns of 1st matrix : ";
    cin >> c1;

    cout << "\nEnter Matrix elements : ";

    int arr1[r1][c1];
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin >> arr1[i][j];
        }
    }

    int r2, c2;

    cout << "\nEnter number of rows of 2nd matrix : ";
    cin >> r2;

    cout << "Enter number of column of 2nd matrix : ";
    cin >> c2;

    cout << "\nEnter Matrix elements : ";

    int arr2[r2][c2];
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cin >> arr2[i][j];
        }
    }

    if (c1 != r2)
    {
        cout << "\nMatrix multiplication is not possible for this input.";
        return 0;
    }

    int ans[r1][c2];

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            ans[i][j] = 0;
        }
    }

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            for (int k = 0; k < c1; k++)
            {
                ans[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    cout << "\nResultant matrix after multiplication : " << endl;

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
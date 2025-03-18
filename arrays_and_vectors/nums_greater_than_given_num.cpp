#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter number whose greater number you want to find : ";
    cin >> num;
    int count = 0;

    int arr[] = {8, 4, 9, 6, 9, 7, 34, 10};
    int sz = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < sz; i++)
    {
        if (arr[i] > num)
        {
            count += 1;
        }
    }
    cout << "Number of elements greater than given no. : " << count << endl;
    return 0;
}
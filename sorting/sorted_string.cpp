#include <iostream>
using namespace std;

void BubbleSort(char arr[], int sz)
{
    for (int i = 0; i < sz - 1; i++)
    {
        for (int j = 0; j < sz - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void display(char arr[], int sz)
{
    for (int i = 0; i < sz; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    char arr[] = {'a', 'g', 'd', 'b', 'e', 'm'};
    int sz = sizeof(arr) / sizeof(arr[0]);

    BubbleSort(arr, sz);
    display(arr, sz);

    return 0;
}
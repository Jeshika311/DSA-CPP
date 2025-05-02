// Sort a String in decreasing order of values associated after removal of values smaller than X

#include <iostream>
#include <string>
using namespace std;

void SelectionSort(string &str)
{
    int sz = str.length();

    for (int i = 0; i < sz; i++)
    {
        int SmallerIdx = i;
        for (int j = i+1; j < sz; j++)
        {
            if (str[j] < str[SmallerIdx])
            {
                SmallerIdx = j;
            }
        }
        swap(str[i] , str[SmallerIdx]);
    }
}

string SortString(string str, char X)
{
    string filtered = "";

    for (char ch : str)
    {
        if (ch >= X)
        {
            filtered += ch;
        }
    }

    SelectionSort(filtered);
    return filtered;
}

int main()
{
    string str = "abcdefg";
    char X = 'c';

    cout << "Sorted string : " << SortString(str, X);
    return 0;
}
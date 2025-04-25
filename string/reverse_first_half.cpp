// Input a string of even length and reverse the first half of the string.

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string : ";
    getline(cin, str);

    int length = str.length();

    if (length % 2 != 0)
    {
        cout << "Error : Please enter a string with even length." << endl;
        return 1;
    }

    int HalfLength = length / 2;

    reverse(str.begin(), str.begin() + HalfLength);

    cout << "Modified String : " << str << endl;
    return 0;
}
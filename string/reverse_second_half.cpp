// Input a string of even length and reverse the second half of the string.

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{

    string str;
    cout << "Enter a string : ";
    getline(cin, str);

    int length = str.length();

    if (length % 2 != 0)
    {
        cout << "Error : Please enter a string with even length.";
    }

    else
    {
        reverse(str.begin() + length / 2, str.end());
        cout << "Modified string : " << str << endl;
    }

    return 0;
}
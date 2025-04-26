// Input a string of length greater than 5 and reverse the substring from position 2 to 5 using inbuilt functions.

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string whose length is greater than 5 : ";
    getline(cin, str);

    int length = str.length();

    if (length <= 5)
    {
        cout << "Error : Enter a string with length greater than 5.";
    }

    else
    {
        reverse(str.begin() + 2 , str.begin() + 6);
        cout << "Modified string : " << str << endl;
    }
    return 0;
}
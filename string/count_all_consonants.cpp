#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string vowels = "aeiou";

    string str;
    cout << "Enter a string : ";
    getline(cin, str);
    int count = 0;
    int spaces = 0;

    for (int i = 0; i < str.length(); i++)
    {
        for (char ch : vowels)
        {
            if (str[i] == ch)
            {
                count += 1;
            }
        }
        if (str[i] == ' '){
            spaces += 1;
        }
    }
    cout << "Number of consonants : " << str.length() - (count + spaces) << endl;
    return 0;
}
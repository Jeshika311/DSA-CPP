#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string vowels = "aeiouAEIOU"; // Consider uppercase too
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    int vowel_count = 0;
    int consonant_count = 0;
    int spaces = 0;

    for (char ch : str)
    {
        ch = tolower(ch); // Convert character to lowercase for simplified checking

        if (ch >= 'a' && ch <= 'z')
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                vowel_count++;
            }
            else
            {
                consonant_count++;
            }
        }
        else if (ch == ' ')
        {
            spaces++;
        }
    }

    cout << "Number of vowels: " << vowel_count << endl;
    cout << "Number of consonants: " << consonant_count << endl;
    cout << "Number of spaces: " << spaces << endl;

    return 0;
}

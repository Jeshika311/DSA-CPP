#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string : ";
    getline(cin, str);
    string word = "";

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            sort(word.begin() , word.end());
            cout << word << " ";
            word = "";
        }
        else
        {
            word += str[i];
        }
    }

    if(!word.empty()){
        sort(word.begin() , word.end());
        cout<<word<<endl;
    }
    return 0;
}
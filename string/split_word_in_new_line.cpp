#include <iostream>
#include <string>
using namespace std;

int main()
{

    string str = "my name is jeshika ";
    string word = "";

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            cout << word << endl;
            word = "";
        }
        else
        {
            word += str[i];
        }
    }
    return 0;
}
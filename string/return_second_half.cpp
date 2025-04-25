#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{

    string str = "Consistency is the key to success";
    int length = str.length();
    string sub = str.substr(length / 2, length);

    cout << sub << endl;
    return 0;
}
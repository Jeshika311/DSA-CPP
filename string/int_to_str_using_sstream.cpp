#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    int num = 12345;
    stringstream ss;
    ss << num; // Convert integer to string

    string str = ss.str(); // get the converted string

    cout << "String value : " << str << endl;

    return 0;
}
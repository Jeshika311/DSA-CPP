#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{

    string str = "12345";
    stringstream ss(str);
    int num;

    ss >> num; // Convert string to integer

    cout << "Integer value : " << num << endl;
    return 0;
}
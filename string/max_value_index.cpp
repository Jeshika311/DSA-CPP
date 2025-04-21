#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int MaxValueIndex(vector<string> &strList)
{
    int max = stoi(strList[0]); // Initialize max with the first element
    int index = 0;              // Index of max value

    for (int i = 1; i < strList.size(); i++)
    {
        int num = stoi(strList[i]);
        if (num > max)
        {
            max = num;
            index = i;
        }
    }
    cout << "Maximum Value : " << max << endl;
    return index;
}

int main()
{
    vector<string> strList = {"123", "456", "789", "99"};

    cout << "Maximum Value Index : " << MaxValueIndex(strList) << endl;
    return 0;
}
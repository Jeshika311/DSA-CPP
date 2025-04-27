#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string str = "Hello world from C++";
    stringstream ss(str);  // Create a stringstream object

    string word;
    while (ss >> word) {   // Extract words one by one
        cout << word << endl;
    }
    return 0;
}
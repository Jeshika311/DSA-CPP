#include<iostream>
#include<string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int start = 0, end = str.length() - 1;
    bool isPalindrome = true;

    while (start < end) {
        if (tolower(str[start]) != tolower(str[end])) {
            isPalindrome = false;
            break;
        }
        start++;
        end--;
    }

    if (isPalindrome) {
        cout << "Given string is a palindrome" << endl;
    } else {
        cout << "Given string is not a palindrome" << endl;
    }

    return 0;
}
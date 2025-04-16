#include <iostream>
using namespace std;

int main() {
    int num, original, reversed = 0, digit;

    cout << "Enter a number: ";
    cin >> num;

    original = num;

    while (num > 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    if (original == reversed) {
        cout << original << " is a palindrome number." << endl;
    } else {
        cout << original << " is not a palindrome number." << endl;
    }

    return 0;
}
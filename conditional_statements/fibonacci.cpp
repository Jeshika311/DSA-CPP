#include<iostream>
using namespace std;

int main() {
    int n1=0, n2=1, n3, n;
    cin >> n;
    cout << n1 << n2 << endl;
    for (int i=1; i<n; i++) {
        n3 = n1 + n2;
        cout << n3 << " ";
        n1 = n2;
        n2 = n3;
    }
    return 0;
}
#include<iostream>
using namespace std;

int main(){

    int arr[] = {20,30,40,50,60};
    int *ptr = arr;

    cout<<*ptr<<endl;
    cout<<*(ptr +1)<<endl;
    cout<<*(ptr + 2)<<endl;
    cout<<*(ptr + 3)<<endl;
    cout<<*(ptr + 4)<<endl;
    return 0;
}
//print absolute value of given integer

#include<iostream>
using namespace std;
int main(){

    int x;
    cout<<"Enter an integer"<<endl;
    cin>>x;

    int AbsoluteValue = abs(x);
    cout<<"Absolute value of x = "<<AbsoluteValue;

    return 0;
}
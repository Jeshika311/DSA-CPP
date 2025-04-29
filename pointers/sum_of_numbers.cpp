#include<iostream>
using namespace std;

int main(){
    int num1,num2,sum;
    
    cout<<"Enter number 1 : ";
    cin>>num1;
    cout<<"Enter number 2 : ";
    cin>>num2;

    int *ptr1 = &num1;
    int *ptr2 = &num2;

    sum = *ptr1 + *ptr2;
    cout<<"Sum of number 1 and number 2 is : "<<sum<<endl;

    return 0;
}
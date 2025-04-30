#include<iostream>
using namespace std;

int swap(int *num1,int *num2){

*num1 = *num1 + *num2;
*num2 = *num1 - *num2;
*num1 = *num1 - *num2;

cout<<"1st number : "<<*num1<<endl;
cout<<"2nd number : "<<*num2<<endl;
return 0;
}

int main(){

    int num1,num2;
    cout<<"Enter 1st number : ";
    cin>>num1;
    cout<<"Enter 2nd number : ";
    cin>>num2;

    cout<<swap(&num1,&num2)<<endl;

return 0;
}
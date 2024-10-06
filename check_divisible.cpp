//Check that the given no. is divisible by 5 or not

#include<iostream>
using namespace std;
int main() {
int x;
cout<<"Enter value of x:-"<<endl;
cin>>x;

if(x%5==0 || x%3==0)
{
    cout<<"it is dividible by 5 or 3"<<endl;

    if(x%3==0){
        cout<<"it is divisible by 3"<<endl;
    }
    else{
        cout<<"it is divisible by 5"<<endl;
    }
    }
    else{
    cout<<"it is not divisible by 5 and 3"<<endl;
}
}
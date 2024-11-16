#include<iostream>
using namespace std;

int sum(int a , int b){
    return a+b;
}

int main(){
    int a,b;
    cout<<"Enter 1st number : ";
    cin>>a;
    cout<<"Enter 2nd number : ";
    cin>>b;   
    cout<<sum(a,b)<<endl;
    return 0;
}
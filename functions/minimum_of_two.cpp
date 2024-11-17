#include<iostream>
using namespace std;

int minimum(int a , int b){
    if(a>b){
        return b;
    }
    else{
        return a;
    }
}

int main(){
    int a,b;
    cout<<"Enter 1st number : ";
    cin>>a;
    cout<<"Enter 2nd number : ";
    cin>>b;  
    cout<< minimum(a,b)<<endl;
    return 0;
}
#include<iostream>
using namespace std;

int Power(int a, int b){
    if(b==0){
        return 1;
    }
    return a*Power(a,b-1);
}

int main(){

    int a;
    cout<<"Enter number whose power you want to calculate : ";
    cin>>a;

    int b;
    cout<<"Enter power : ";
    cin>>b;

    cout<<"Answer : "<<Power(a,b)<<endl;

    return 0;
}
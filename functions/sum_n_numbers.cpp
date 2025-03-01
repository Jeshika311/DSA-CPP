#include<iostream>
using namespace std;

int sum(int n){
    int sum_num = 0;
    for(int i=1;i<=n;i++){
        sum_num+=i;
    }
    return sum_num;
}

int main(){
    int n;
    cout<<"Enter number upto which you want to find sum : ";
    cin>>n;

    cout<<"sum of numbers is : "<<sum(n)<<endl;

    return 0;
}
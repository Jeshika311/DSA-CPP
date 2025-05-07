#include<iostream>
using namespace std;

int PrintNums(int n, int num){
    if(num==n){
        return n;
    }
    cout<<n<<" ";
    PrintNums(n+1 , num);
}

int main(){
    int num;
    cout<<"Enter number : ";
    cin>>num;

    PrintNums(1 , num);
    return 0;
}
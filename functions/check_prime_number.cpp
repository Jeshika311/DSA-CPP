#include<iostream>
using namespace std;

bool checkPrime(int num){
    if(num<=1){
        return false;
    }
    for(int i=2;i*i<=num;i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    if(checkPrime(num)){
    cout<<num<<" is a prime number"<<endl;
    }
    else{
        cout<<num<<" is not a prime number"<<endl;
    }
    return 0;
}
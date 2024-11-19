#include<iostream>
using namespace std;

int squareOfNumber(int n){
    int square = n*n;
    return square;    
}
int NoOfDigit(int n){
    int count=0;
    while(n!=0){
        n/=10;
        count++;
    }
    return count;
}

int main(){
    int n;
    cout<<"Enter any number : ";
    cin>>n;
    cout<<"Square of number is : "<<squareOfNumber(n)<<endl;
    cout<<"Total number of digits in given number is : "<<NoOfDigit(n)<<endl;
    return 0;
}
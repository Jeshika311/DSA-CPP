#include<iostream>
using namespace std;

void FirstAndLast(int digit , int *start , int *end){
    *end = digit%10;        //find last digit
    while(digit>10){
        digit/=10;
    }
    *start = digit;
};

int main(){
    int digit,start,end;

    cout<<"Enter digit : ";
    cin>>digit;

    FirstAndLast(digit,&start,&end);

    cout<<"First digit : "<<start<<endl;
    cout<<"Last digit : "<<end<<endl;

    return 0;
}
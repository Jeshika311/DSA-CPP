#include<iostream>
using namespace std;
int main(){
    float percentage;

    cout<<"Enter percentage"<<endl;
    cin>>percentage;

    if(percentage<=100 && percentage>=90){
        cout<<"Grade = A"<<endl;
    }
    else if(percentage<90 && percentage>=75){
        cout<<"Grade = B"<<endl;
    }
    else if(percentage<75 && percentage>=40){
        cout<<"Grade = C"<<endl;
    }
    else{
        cout<<"FAIL"<<endl;
    }
}
#include<iostream>
using namespace std;
int main(){

    float sub1,sub2,sub3,sub4,sub5;
    {
    cout<<"marks in sub1"<<endl;
    cin>>sub1;

    cout<<"marks in sub2"<<endl;
    cin>>sub2;

    cout<<"marks in sub3"<<endl;
    cin>>sub3;

    cout<<"marks in sub4"<<endl;
    cin>>sub4;

    cout<<"marks in sub5"<<endl;
    cin>>sub5;

    float percentage = (sub1+sub2+sub3+sub4+sub5)/5;
    cout<<"your percenatge is :-"<<percentage<<endl;
    }
    return 0;
}
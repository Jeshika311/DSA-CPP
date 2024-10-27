#include<iostream>
using namespace std;
int main(){
    int principal;
    int rate;
    int time;
    
    cout<<"Enter Principal"<<endl;
    cin>>principal;

    cout<<"Enter rate"<<endl;
    cin>>rate;

    cout<<"Enter time"<<endl;
    cin>>time;

    float Simple_Interest;
    Simple_Interest = (principal*rate*time)/100;
    cout<<"Simple Interest ="<<Simple_Interest;

    return 0;
}
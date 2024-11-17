#include<iostream>
using namespace std;

float AreaOfCircle(int r){
    float Area = 3.14*r*r;
    return Area;
}

int main(){
    int r;
    cout<<"Enter value of radius : ";
    cin>>r;
    cout<<AreaOfCircle(r)<<endl;
    return 0;
}
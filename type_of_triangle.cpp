#include<iostream>
using namespace std;
int main() {
    int side1;
    int side2;
    int side3;

    cout<<"Enter side1 :-"<<endl;
    cin>>side1;
    cout<<"Enter side2 :-"<<endl;
    cin>>side2;
    cout<<"Enter side3 :-"<<endl;
    cin>>side3;

    if((side1 == side2) && (side2 == side3)){
        cout<<"It is an equilateral triangle"<<endl;
    }
    else if((side2 != side3) && (side3 != side1) && (side1 != side2) ){
        cout<<"It is a scalene triangle"<<endl;
    }
    else{
        cout<<"It is a isosceles triangle"<<endl;
    }
}
#include<iostream>
using namespace std;
    int main() {
    float x1,x2,x3,y1,y2,y3;
    cout<<"Value of x1:"<<endl;
    cin>>x1;
    cout<<"Value of x2:"<<endl;
    cin>>x2;
    cout<<"Value of x3:"<<endl;
    cin>>x3;
    cout<<"Value of y1:"<<endl;
    cin>>y1;
    cout<<"Value of y2:"<<endl;
    cin>>y2;
    cout<<"Value of y3:"<<endl;
    cin>>y3;

    float slope1;
    slope1 = (y2-y1)/(x2-x1);

    float slope2;
    slope2 = (y3-y2)/(x3-x2);

    if(slope1 == slope2){
        cout<<"Given points are fall on a straight line"<<endl;
    }
    else{
        cout<<"Given points does not fall on a straight line"<<endl;
    }
}
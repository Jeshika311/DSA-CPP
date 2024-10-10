#include<iostream>
using namespace std;
int main() {
    float x,y;
    cout<<"Enter value of x="<<endl;
    cin>>x;
    cout<<"Enter value of y="<<endl;
    cin>>y;

    if(x==0 && y==0){
        cout<<"It lies at origin"<<endl;
    }
    else if (x == 0 && y != 0){
        cout<<"It lies at y axis"<<endl;
    }
    else if (y == 0 && x !=0){
        cout<<"It lies at x axis"<<endl;
    }
    else {
        cout<<"It lies at both x axis and y axis"<<endl;
    }
}
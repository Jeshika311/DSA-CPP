//Which one is greater Area or Circumference

#include<iostream>
using namespace std;
int main() {

    int radius;
    cout<<"Enter value of radius"<<endl;
    cin>>radius;

//Finding circumference of circle
    float circumference=2*3.14*radius;
    cout<<"Circumference of circle:-"<<circumference<<endl;

//Finding area of circle
    float area=3.14*radius*radius;
    cout<<"Area of circle:-"<<area<<endl;
 
//Finding which one is greater
    if(circumference>area){
        cout<<"Circumference is greater than area"<<endl;
    }
    else{
        cout<<"Area is greater than circumference"<<endl;
    }
    return 0;
}
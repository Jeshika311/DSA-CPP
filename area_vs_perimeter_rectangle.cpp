//Which one is greater Area or Perimeter

#include<iostream>
using namespace std;
int main() {

    float length;
    cout<<"Enter length :-"<<endl;
    cin>>length;
    float breadth;
    cout<<"Enter breadth:-"<<endl;
    cin>>breadth;

//Finding Area of rectangle
    float area=length*breadth;
    cout<<"Area of rectangle:-"<<area<<endl;

//Finding perimeter of rectangle
    float perimeter = 2*(length+breadth);
    cout<<"Perimeter of rectangle:-"<<perimeter<<endl;
 
//Finding which one is greater
    if(perimeter>area){
        cout<<"Perimeter is greater than area"<<endl;
    }
    else{
        cout<<"Area is greater than Perimeter"<<endl;
    }
    return 0;
}
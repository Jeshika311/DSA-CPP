#include<iostream>
using namespace std;
int main()
{
    int option;
    int number1;
    int number2;
    int Addition;
    
    
    cout<<"Basic Calculations"<<endl;
    cout<<"1. Addition"<<endl;
    cout<<"2. Subtraction"<<endl;
    cout<<"3. Multiply"<<endl;
    cout<<"4. Division"<<endl;
    cout<<""<<endl;

    cout<<"Enter any option"<<endl;
    cin>>option;

    if(option==1)
    {
        cout<<"Enter 1st number :-"<<endl;
        cin>>number1;
        cout<<"Enter 2nd number :-"<<endl;
        cin>>number2;
        Addition = number1 + number2;
        cout<<"Answer ="<<Addition<<endl;
    }
    else{
        cout<<"invalid"<<endl;
    }

}
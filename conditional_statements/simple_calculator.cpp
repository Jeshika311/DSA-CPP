#include<iostream>
using namespace std;
int main()
{
    float option,number1,number2,Addition,Subtraction,Multiply,Divide;

    cout<<"Basic Calculations"<<endl;
    cout<<"1. Addition"<<endl;
    cout<<"2. Subtraction"<<endl;
    cout<<"3. Multiply"<<endl;
    cout<<"4. Division"<<endl;
    cout<<""<<endl;

    cout<<"Enter any option"<<endl;
    cin>>option;

    cout<<"Enter 1st number :-"<<endl;
    cin>>number1;
    cout<<"Enter 2nd number :-"<<endl;
    cin>>number2;

    if(option==1)
    {
        Addition = number1 + number2;
        cout<<"Answer ="<<Addition<<endl;
    }
    else if(option==2){
        
        Subtraction = number1 - number2;
        cout<<"Answer ="<<Subtraction<<endl;
    }
    else if(option==3){
        
        Multiply = number1*number2;
        cout<<"Answer ="<<Multiply<<endl;
    }
    else if(option==4){
        Divide = number1/number2;
        cout<<"Answer ="<<Divide<<endl;    
    }
    else{
        cout<<"Invalid input"<<endl;
    }
    cout<<"____THANKYOU____"<<endl;
}
//if else statement 
//check whether a number is odd or even 

#include<iostream>
using namespace std;

int main()
{
    int x;
    cin>>x;

    if(x%2==0){
    cout<<"even number"<<endl;
    }
    else
{
    cout<<"odd number"<<endl;
}
}


//else if statement

#include<iostream>
using namespace std;

int main()
{
    int age;
    cin>>age;

    if(age<12){
        cout<<"it is a child"<<endl;
    }
    else if(age>=12 && age<=18) {
        cout<<"it is a teenager"<<endl;
    }
    else {
        cout<<"it is an adult"<<endl;
    }
}

//nested if statement
//print a value if it is even and divisible by 3

#include<iostream>
using namespace std;

int main()
{
    int x;
    cin>>x;

    if(x%2==0){
    cout<<"even number"<<endl;
    
    if(x%3==0)
        cout<<"also divisible by 3"<<endl;
    }
    else{
     cout<<"not divisible by 3"<<endl;
    }
}
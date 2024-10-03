#include<iostream>
using namespace std;
int main(){ 

    //Arithmatic operator
    int num1=6;
    int num2=3;
    
    cout<<num1+num2<<endl;
    cout<<num1-num2<<endl;
    cout<<num1*num2<<endl;
    cout<<num1/num2<<endl;
    cout<<num1%num2<<endl;

    //Relational operator
    cout<<(num1==num2)<<endl;
    cout<<(num1!=num2)<<endl;
    cout<<(num1>=num2)<<endl;

    num1+=3;
    cout<<num1<<endl;
    num2-=2;
    cout<<num2<<endl;
    
    //Logical operators
    bool exp1=true;
    bool exp2=false;

    cout<<(exp1&&exp2)<<endl;
    cout<<(exp1||exp2)<<endl;
    cout<<(!exp1)<<endl;

    //conditional operator
    int a=4;
    cout<<sizeof(a)<<endl;

    char name='a';
    cout<<sizeof(name)<<endl;

    bool flag;
    a==name? flag=true : flag=false;
    cout<<flag<<endl;

    //Increment and Decrement operator
    int c=6;
    cout<<(c++)<<endl;
    int b=5;
    cout<<(--b)<<endl;

    //Bitwise operator
    cout<<(num1<<1)<<endl;
    cout<<(num1>>1)<<endl;

    
    cout<<(num1&num2)<<endl;
    cout<<(num1|num2)<<endl;

    return 0;
 }
#include<iostream>
using namespace std;

int sum(int number){
    int digSum = 0;

   while(number>0){
    int lastDigit = number%10;
    number/=10;

    digSum+=lastDigit;
   }
   return digSum;
}

int main(){
    int number;
    cout<<"Enter number whose sum of digits you want to find : ";
    cin>>number;
    cout<<"sum of digits is "<<sum(number)<<endl;
    return 0;
}
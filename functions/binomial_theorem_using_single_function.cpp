#include<iostream>
using namespace std;

int factorial(int n){
    int fact =1;

    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}
int main(){
    int n,r;
    cout<<"Enter value of n : ";
    cin>>n;
    cout<<"Enter value of r : ";
    cin>>r;

    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nr = factorial(n-r);

    int formula = fact_n / (fact_r * fact_nr);
    cout<<formula<<endl;
    return 0;
}
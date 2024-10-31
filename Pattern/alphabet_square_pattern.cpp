#include<iostream>
using namespace std;
int main(){
     
int n;
cout<<"Enter the number of rows :- ";
cin>>n;

for(int i=1;n>=i;i++){
    char alphabet = 'A';
    for(int j=0;n>j;j++){
        cout<<alphabet<<" ";
        alphabet+=1;
    }
    cout<<endl;
    }
    return 0;
}
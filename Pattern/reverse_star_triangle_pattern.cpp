#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter the number of rows :- ";
    cin>>n;

    for(int i=n;i>0;i--){
        for(int j=0;j<=(n-i);j++){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
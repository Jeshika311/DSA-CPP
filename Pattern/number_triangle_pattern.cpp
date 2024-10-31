#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter the no. of rows :- ";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n-i);j++){
            cout<<" ";
        }
        for(int count=1;count<=i;count++){
        cout<<count<<" ";
    }
    cout<<endl;
}
}
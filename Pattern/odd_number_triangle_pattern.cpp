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
        for(int count=1;count<=2*i;count++){
            if(count%2==1){
        cout<<count<<" ";
            }
    }
    cout<<endl;
}
}
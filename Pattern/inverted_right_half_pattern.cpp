#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter the number of rows : ";
    cin>>n;

    for(int i=0;i<=n;i++){
        for(int j=0;j<=2*i;j++){
            cout<<" ";
        }
        for(int k=0;k<=(n-i);k++){
            cout<<"* ";
        }
    cout<<endl;
    }
    return 0;
}
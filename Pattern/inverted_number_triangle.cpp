#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;

    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout<<" ";
        }
        for(int k=1;k<=(n-i);k++){
            cout<<k<<" ";
        }
        cout<<endl;
    }
    return 0;
}
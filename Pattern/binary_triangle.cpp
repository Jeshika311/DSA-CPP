#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter the number of rows : ";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n-i);j++){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            if(k%2==0){
                cout<<"0 ";
            }
            else{
                cout<<"1 ";
            }
        }
        cout<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        for(int k=1;k<=(2*n-2*i);k++){
          cout<<"  ";
        }
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        for(int k=1;k<=(2*n-2*i);k++){
          cout<<"  ";
        }
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
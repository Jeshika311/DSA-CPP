#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter number of rows : ";
    cin>>n;
    int m;
    cout<<"Enter number of columns : ";
    cin>>m;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(i==n || i==1 || j==m || j==1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}
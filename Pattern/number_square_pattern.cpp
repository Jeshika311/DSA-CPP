#include<iostream>
using namespace std;
int main(){
     
int n;
cout<<"Enter the number of rows : ";
cin>>n;

for(int i=1;n>=i;i++){
    for(int j=1;j<=n;j++){
        cout<<j<<" ";
    }
    cout<<endl;
    }
    return 0;
}
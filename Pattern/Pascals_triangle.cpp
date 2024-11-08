#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter value of n :- ";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n-i);j++){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            if(k==1 || k==i){
                cout<<"1 ";
            }
            else{
                cout<<i-1<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}

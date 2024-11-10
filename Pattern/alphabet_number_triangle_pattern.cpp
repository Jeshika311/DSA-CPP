#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter number of rows : ";
    cin>>n;

    for(int i=1;i<=n;i++){
        char alphabet = 'A';
        int count = 1;
        for(int j=1;j<=i;j++){
            if(i%2==0){
                cout<<alphabet<<" ";
                alphabet+=1;
            }
            else{
                cout<<count<<" ";
                count+=1;
            }
        }
        cout<<endl;
    }
    return 0;
}

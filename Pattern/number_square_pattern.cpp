#include<iostream>
using namespace std;
int main(){
     
int row =  4;
int column = 4;

int count = 1;
for(int i=1;row>=i;i++){
    for(int j=1;column>=j;j++){
        cout<<count<<" ";
        count++;
    }
    cout<<endl;
}
}
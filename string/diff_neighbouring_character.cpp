#include<iostream>
#include<string>
using namespace std;

int main(){
    int count = 0;
    string str;
    cout<<"Enter string : ";
    cin>>str;

    for(int i=0;i<str.length() - 1;i++){
        if(str[i] != str[i+1]){
            count++;
        }
    }
    cout<<"Number of times neighbouring character are different : "<<count<<endl;
    return 0;
}
#include<iostream>
using namespace std;
int main() {

char character;
cout<<"Enter any character"<<endl;
cin>>character;

if(character>='a' && character<='z'){
    cout<<"It is alphabet"<<endl;
}
else{
    cout<<"It is not alphabet"<<endl;
}
}
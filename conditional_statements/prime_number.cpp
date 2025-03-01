#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;

    if (n <= 1) {
        cout << "Not a prime number";
        return 0;
    }

    bool is_prime = true;

    for(int i=2;i<=n;i++){
        if(n%2==0){
            is_prime = false;
            break;
        }
    }

    if(is_prime){
        cout<<"Prime number";
    }
    else{
        cout<<"Non prime number";
    }
    return 0;
}
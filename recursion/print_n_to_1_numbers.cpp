#include<iostream>
using namespace std;

int printNums(int n){
    if(n==0){
        return 0;
    }
    cout<<n<<" ";
    printNums(n-1);
}

int main(){
    printNums(8);
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector <int> arr = {1, 3, 7, 8, 7, 5, 6, 7, 4};
    int sz = arr.size();
    int x =7;

    int index = -1;
    for(int i=0;i<sz;i++){
        if(arr[i] == x){
            index = i;
        }
    }
    if(index != -1){
        cout<<"Last occurance of "<<x<<" is at index "<<index<<endl;
    }
    else{
        cout<<x<<" not found in the array"<<endl;
    }
    return 0;
}
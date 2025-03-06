#include<iostream>
#include<vector>
using namespace std;

void duplet(vector <int> arr , int sz ,int target){
    for(int i=0;i<sz;i++){
        for(int j=i+1;j<sz;j++){
            if(arr[i] + arr[j] == target){
                cout<<"Duplets are : "<<arr[i]<<" "<<arr[j];
            }
        }
    }
}

int main(){
    int sz;
    cout<<"Enter number of elements you want to add in your array : ";
    cin>>sz;

    int target;
    cout<<"Enter number whose sum you want to find : ";
    cin>>target;

    vector<int>arr(sz);

    cout<<"Enter array elements seperated by spaces : ";
    for(int i=0;i<sz;i++){
        cin>>arr[i];
    }

    duplet(arr,sz,target);

    return 0;
}
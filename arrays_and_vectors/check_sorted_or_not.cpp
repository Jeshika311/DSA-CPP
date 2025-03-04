#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    int sz;
    cout<<"Enter number of elements you want to add in your array : ";
    cin>>sz;

    vector <int> arr1(sz);
    vector <int> arr2(sz);

    cout<<"Enter array elements seperated by spaces : ";

    for(int i=1; i<sz; i++){
        int num;
        cin>>num;
        arr1.push_back(num);
    }

    arr2 = arr1;
    sort(arr2.begin() , arr2.end());

    if(arr1 == arr2){
        cout<<"Given array is Sorted"<<endl;
    }
    else{
        cout<<"Given array is not sorted"<<endl;
    }
    return 0;
}
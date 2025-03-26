#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    vector <int> arr1 = {86, 48, 9, 56, 93};
    vector <int> arr2 = {11, 2, 31, 4, 52,};

    arr1.insert(arr1.end() , arr2.begin() , arr2.end());

    sort(arr1.begin() , arr1.end());

    for(int nums : arr1){
        cout<<nums<<" ";
    }
    return 0;
}
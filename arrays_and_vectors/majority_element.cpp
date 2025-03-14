#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> arr = {2,2,1,1,1,2,2};
    int sz = arr.size();

    sort(arr.begin() , arr.end());

    cout<<"Majority element : "<<arr[sz/2];
    return 0;
}
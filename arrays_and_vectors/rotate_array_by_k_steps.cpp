#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> arr = {1,2,3,4,5};
    int n = arr.size();
    int k = 2;
    k = k % n;

    int AnsArray[n];
    int j = 0;

    for(int i=n-k;i<n;i++){
        AnsArray[j] = arr[i];
        j++;
    }

    for(int i=0;i<=k;i++){
        AnsArray[j] = arr[i];
        j++;
    }

    for(int val : AnsArray){
        cout<<val<<" ";
    }
    
    return 0;
}
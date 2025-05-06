#include<iostream>
#include<vector>
using namespace std;

int BinarySearch(vector<int> nums , int target , int st, int end){
    if(st<=end){
        int mid = st + (end-st)/2;

        if(nums[mid] == target){
            return mid;
        }
        else if(nums[mid]<=target){
            return BinarySearch(nums, target, mid+1, end);
        }
        else{
            return BinarySearch(nums, target, st, mid-1);
        }
    }
    return -1;
}

int main(){

    vector<int>nums = {-1,0,3,5,9,12};
    int target = 9;
    int st=0;
    int end = nums.size() - 1;

    cout<<"Index of target element is : "<<BinarySearch(nums,target,st,end)<<endl;

    return 0;
}
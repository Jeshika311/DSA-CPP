#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void getAllSubsets(vector<int>& nums , vector<int>&ans , int i, vector<vector<int>>&allsubsets){
    if(i == nums.size()){
        allsubsets.push_back(ans);
        return;
    }

    //include
    ans.push_back(nums[i]);
    getAllSubsets(nums,ans,i+1,allsubsets);

    ans.pop_back();

    int idx = i+1;
    while(idx<nums.size() && nums[idx] == nums[idx-1]){
        idx++;
    }

    //exclude

    getAllSubsets(nums,ans,idx,allsubsets);  
}

vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    sort(nums.begin() , nums.end());

    vector<vector<int>> allsubsets;
    vector<int>ans;

    getAllSubsets(nums, ans, 0, allsubsets);
    return allsubsets;
}

int main(){

    vector<int> nums = {1,2,3,4,4,5};
    vector<vector<int>> result = subsetsWithDup(nums);

    cout<<"All possible subsets : ";
    
    for (const auto& subset : result) {
        cout << "{ ";
        for (int num : subset) {
            cout << num << " ";
        }
        cout << "}\n";
    }
    return 0;
}
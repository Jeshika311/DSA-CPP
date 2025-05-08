#include<iostream>
#include<vector>
using namespace std;

void GetAllSubsets(vector<int>&nums, vector<int>&ans, int i, vector<vector<int>> &allsubsets){
    if(i == nums.size()){
        allsubsets.push_back({ans});
        return;
    }

    //include

    ans.push_back(nums[i]);
    GetAllSubsets(nums,ans,i+1,allsubsets);

    ans.pop_back();

    //exclude

    GetAllSubsets(nums,ans,i+1,allsubsets);
}

vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> allsubsets;
    vector<int>ans;
    
    GetAllSubsets(nums,ans,0,allsubsets);
    return allsubsets;
}

int main(){
    vector<int> nums = {1,2,3,4,4,5};
    vector<vector<int>>result = subsets(nums);

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
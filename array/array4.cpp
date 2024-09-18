#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    vector<int>runningSum(vector<int>&nums){
        int n=nums.size();
        vector<int>pref(n,0);
        pref[0]=nums[0];
        for (int i = 1; i < n; i++)
        {
            pref[i] = pref[i - 1] + nums[i];
        }
        return pref;
    }
};


int main(){
    Solution sol;
    vector<int> nums = {1,2,3,4};
    vector<int> result = sol.runningSum(nums);

    for(int sum:result){
        cout<<sum<<" ";
    }

    return 0;
}
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution{
    public:
    vector<bool>kidsWithCandies(vector<int>& candies,int extraCandies){
        int max_candies = *max_element(candies.begin(), candies.end());

        vector<bool>result(candies.size());

        for (int i = 0; i < candies.size(); i++)
        {
            if (candies[i] + extraCandies >= max_candies)       
            {
                result[i] = true;
            }
            else
            {
                result[i] = false;
            }
            
        }
        return result;
    }
};

int main(){
    Solution sol;
    vector<int> candies = {2,3,5,1,3};
    int extraCandies = 3;
    vector<bool> result = sol.kidsWithCandies(candies,extraCandies);
    for (bool res : result){
        cout<<(res ? "true" " ": "false" " ");
    }
    return 0;
}
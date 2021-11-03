/*
 * @lc app=leetcode id=15 lang=cpp
 *
 * [15] 3Sum
 */

// @lc code=start
// #define target -nums[i]
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        if(nums.size() < 3) return {};
        vector<int>temp(3);
        int sum;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size() - 2; i++){
            if(i && nums[i] == nums[i-1]) continue;
            int j = i + 1;
            int k = nums.size() - 1;
            while(j < k){
                if(nums[j] == nums[j-1] && j > i + 1){
                    j++;
                    continue;
                }
                sum = nums[i] + nums[j] + nums[k];
                if(!sum) {
                    temp[0] = nums[i];
                    temp[1] = nums[j];
                    temp[2] = nums[k];
                    ans.emplace_back(temp);
                    j++;
                    k--;
                }
                else if(sum < 0) j++;
                else k--;
            }
        }
        return ans;
    }
};
// @lc code=end

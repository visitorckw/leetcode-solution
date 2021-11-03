/*
 * @lc app=leetcode id=18 lang=cpp
 *
 * [18] 4Sum
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        if(nums.size() < 4) return {};
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++){
            if(i and nums[i] == nums[i-1]) continue;
            for(int j = i + 1; j < nums.size() - 2; j++){
                if(j != i + 1 and nums[j] == nums[j-1]) continue;
                int L = j + 1;
                int R = nums.size() - 1;
                int sum;
                while(L < R){
                    sum = nums[i] + nums[j] + nums[L] + nums[R];
                    if(sum == target){
                        const vector<int> tmp = {nums[i], nums[j], nums[L], nums[R]};
                        if(ans.empty() or tmp != ans.back())
                            ans.push_back(tmp);
                        L++;
                        R--;
                    }
                    else if(sum < target) L++;
                    else R--;
                }
            }
        }
        return ans;
    }
};
// @lc code=end

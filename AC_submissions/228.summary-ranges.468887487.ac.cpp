/*
 * @lc app=leetcode id=228 lang=cpp
 *
 * [228] Summary Ranges
 */

// @lc code=start
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        if(nums.empty()) return {};
        vector<string>ans;
        long long int start;
        int ctr;
        long long int pre;
        bool con = false;
        for(auto x : nums){
            if(!con){
                pre = start = x;
                ctr = 1;
                con = true;
            }
            else if(x > pre + 1){
                if(ctr == 1)
                    ans.push_back(to_string(start));
                else
                    ans.push_back(to_string(start) + "->" + to_string(start + ctr - 1));
                pre = start = x;
                ctr = 1;
            }
            else {
                ctr++;
                pre = x;
            }
        
        }
        if(ctr == 1)
            ans.push_back(to_string(start));
        else
            ans.push_back(to_string(start) + "->" + to_string(start + ctr - 1));
        return ans;
    }
};
// @lc code=end

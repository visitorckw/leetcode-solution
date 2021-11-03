/*
 * @lc app=leetcode id=128 lang=cpp
 *
 * [128] Longest Consecutive Sequence
 */

// @lc code=start
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>st;
        for(auto x : nums) st.insert(x);
        int res = 0;
        for(auto it : st){
            int num = it;
            if(!st.count(num - 1)){
                int cur = num;
                int ctr = 1;
                while(st.count(cur + 1)){
                    cur++;
                    ctr++;
                }
                res = max(res, ctr);
            }
        }
        return res;
    }
};
// @lc code=end

/*
 * @lc app=leetcode id=1608 lang=cpp
 *
 * [1608] Special Array With X Elements Greater Than or Equal X
 */

// @lc code=start
class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        const int N = nums.size();
        int p = 0;
        for(int i = 0; i <= N; i++){
            while(p < N && i > nums[p]) ++p;
            if(i == N - p) return i;
        }
        return -1;
    }
};
// @lc code=end

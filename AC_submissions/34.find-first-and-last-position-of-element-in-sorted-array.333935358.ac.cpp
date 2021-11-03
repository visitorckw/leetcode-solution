/*
 * @lc app=leetcode id=34 lang=cpp
 *
 * [34] Find First and Last Position of Element in Sorted Array
 */

// @lc code=start
class Solution {
public:
    int bs(vector<int>&vec, const int &target){
        int L = 0, R = vec.size() - 1, m;
        while(L <= R) {
            m = L + ((R - L) >> 1);
            if(vec[m] < target)
                L = m + 1;
            else if(vec[m] > target)
                R = m - 1;
            else
                return m;
        }
        return -1;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int index = bs(nums,target);
        if(index == -1)
            return (vector<int>){-1,-1};
        int L, R;
        for(int i = index; i < nums.size(); i++)
            if(nums[i] == target)
                R = i;
        for(int i = index; i >= 0; i--)
            if(nums[i] == target)
                L = i;
        return (vector<int>){L,R};
    }
};
// @lc code=end

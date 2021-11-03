/*
 * @lc app=leetcode id=215 lang=cpp
 *
 * [215] Kth Largest Element in an Array
 */

// @lc code=start
class Solution {
public:
    int partition(vector<int>&nums, int L, int R){
        int t = L;
        for(int i = L; i < R; i++){
            if(nums[i] > nums[R])
                swap(nums[i], nums[t++]);
        }
        swap(nums[t], nums[R]);
        return t;
    }
    int findKthLargest(vector<int>& nums, int k) {
        int L = 0;
        int R = nums.size() - 1;
        k--;
        while(L <= R){
            int p = partition(nums, L, R);
            if(p == k) return nums[p];
            if(p < k) L = p + 1;
            else R = p - 1;
        }
        return -1;
    }
};
// @lc code=end

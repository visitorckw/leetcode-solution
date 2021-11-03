/*
 * @lc app=leetcode id=88 lang=cpp
 *
 * [88] Merge Sorted Array
 */

// @lc code=start
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i = m, j = 0; i < m+n && j < n; i++, j++) {
            nums1[i] = nums2[j];
        }
        sort(nums1.begin(),nums1.end());
    }
};
// @lc code=end

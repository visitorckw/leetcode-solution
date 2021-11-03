/*
 * @lc app=leetcode id=852 lang=cpp
 *
 * [852] Peak Index in a Mountain Array
 */

// @lc code=start
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int L = 0;
        int R = arr.size() - 1;
        int m;
        while(L < R){
            m = (L + R) / 2;
            if(arr[m] < arr[m+1]) L = m + 1;
            else R = m;
        }
        return L;
    }
};
// @lc code=end

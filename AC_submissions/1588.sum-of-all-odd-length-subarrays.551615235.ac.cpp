/*
 * @lc app=leetcode id=1588 lang=cpp
 *
 * [1588] Sum of All Odd Length Subarrays
 */

// @lc code=start
class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int res = 0;
        vector<int>prefix(arr.size());
        prefix[0] = arr[0];
        for(int i = 1; i < arr.size(); i++)
            prefix[i] = prefix[i-1] + arr[i];
        for(int len = 1; len <= arr.size(); len += 2){
            for(int i = 0; i + len - 1 < arr.size(); i++)
                res += prefix[i+len-1] - prefix[i] + arr[i];
        }
        return res;
    }
};
// @lc code=end

/*
 * @lc app=leetcode id=1619 lang=cpp
 *
 * [1619] Mean of Array After Removing Some Elements
 */

// @lc code=start
class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int block = arr.size() / 20;
        long long int sum = 0;
        for(int i = block; i < arr.size() - block; i++)
            sum += arr[i];
        return sum * 1.0 / (arr.size() - ( block << 1));
    }
};
// @lc code=end

/*
 * @lc app=leetcode id=1502 lang=cpp
 *
 * [1502] Can Make Arithmetic Progression From Sequence
 */

// @lc code=start
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        const int diff = arr[1] - arr[0];
        for(int i = 2; i < arr.size(); i++)
            if(arr[i] - arr[i-1] != diff)
                return false;
        return true;
    }
};
// @lc code=end

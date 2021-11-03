/*
 * @lc app=leetcode id=167 lang=cpp
 *
 * [167] Two Sum II - Input Array Is Sorted
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int L = 0;
        int R = numbers.size() - 1;
        while(true)
        {
            if(numbers[L] + numbers[R] > target) R--;
            else if(numbers[L] + numbers[R] < target) L++;
            else return {L + 1, R + 1};
        }
        return {0,0};
    }
};
// @lc code=end

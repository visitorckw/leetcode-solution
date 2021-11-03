/*
 * @lc app=leetcode id=414 lang=cpp
 *
 * [414] Third Maximum Number
 */

// @lc code=start
class Solution {
public:
    
    int thirdMax(vector<int>& nums) {
        long long int max1 = LONG_MIN, max2 = LONG_MIN, max3 = LONG_MIN;
        for(auto &i : nums)
        {
            if(i > max1)
            {
                max3 = max2;
                max2 = max1;
                max1 = i;
            }
            else if(i > max2 && i < max1)
            {
                max3 = max2;
                max2 = i;
            }
            else if(i > max3 && i < max2)
            {
                max3 = i;
            }
        }
        return max3 == LONG_MIN || max2 == max3 ? max1 : max3;
    }
};
// @lc code=end

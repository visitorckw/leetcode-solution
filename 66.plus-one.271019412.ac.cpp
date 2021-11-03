/*
 * @lc app=leetcode id=66 lang=cpp
 *
 * [66] Plus One
 */

// @lc code=start
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if(digits.empty()) return digits;
        reverse(digits.begin(),digits.end());
        digits[0]++;
        for(int i = 0; i < digits.size() - 1; i++)
        {
            if(digits[i] == 10) 
            {
                digits[i] = 0;
                digits[i+1]++;
            }
            else break;
        }
        if(digits.back() == 10) 
        {
            *(digits.end()-1) = 0;
            digits.push_back(1);
        }
        reverse(digits.begin(),digits.end());
        return digits;
    }
};
// @lc code=end

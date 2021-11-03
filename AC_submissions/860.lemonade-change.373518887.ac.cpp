/*
 * @lc app=leetcode id=860 lang=cpp
 *
 * [860] Lemonade Change
 */

// @lc code=start
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int c5 = 0;
        int c10 = 0;
        for(auto s : bills){
            if(s == 5) ++c5;
            else if(s == 10) {
                ++c10;
                --c5;
            }
            else{
                if(c10 > 0 && c5 > 0){
                    --c10;
                    --c5;
                }
                else if(c5 >=3)
                    c5 -= 3;
                else return false;
            }
            if(c5 < 0 || c10 < 0) return false;
        }
        return true;
    }
};
// @lc code=end

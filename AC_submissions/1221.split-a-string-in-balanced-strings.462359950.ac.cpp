/*
 * @lc app=leetcode id=1221 lang=cpp
 *
 * [1221] Split a String in Balanced Strings
 */

// @lc code=start
class Solution {
public:
    int balancedStringSplit(string s) {
        int ans = 0;
        int L = 0;
        int R = 0;
        bool flag = false;
        
        for(int i = 0; i < s.size(); i++){
            if(!flag){
                L = R = 0;
                flag = true;
            }
            if(s[i] == 'L') L++;
            else R++;
            if(L == R){
                flag = false;
                ans++;
            }
        }
        
        return ans;
    }
};
// @lc code=end

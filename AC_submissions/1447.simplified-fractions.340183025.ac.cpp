/*
 * @lc app=leetcode id=1447 lang=cpp
 *
 * [1447] Simplified Fractions
 */

// @lc code=start
class Solution {
public:
    vector<string> simplifiedFractions(int n) {
        vector<string>ans;
        string s;
        for(int i = 2; i <= n; i++){
            for(int j = 1; j < i; j++){
                if(gcd(i,j) == 1){
                    s.clear();
                    s += to_string(j);
                    s += "/";
                    s += to_string(i);
                    ans.push_back(s);
                }
            }
        }
        return ans;
    }
};
// @lc code=end

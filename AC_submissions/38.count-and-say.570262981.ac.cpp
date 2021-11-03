/*
 * @lc app=leetcode id=38 lang=cpp
 *
 * [38] Count and Say
 */

// @lc code=start
class Solution {
public:
    string countAndSay(int n) {
        if(n == 1) return "1";
        const string str = countAndSay(n-1);
        string res;
        char prev = str[0];
        int ctr = 1;
        for(int i = 1; i < str.size(); i++){
            if(str[i] == prev) ++ctr;
            else{
                res += to_string(ctr) + prev;
                prev = str[i];
                ctr = 1;
            }
        }
        res += to_string(ctr) + prev;
        return res;
    }
};
// @lc code=end

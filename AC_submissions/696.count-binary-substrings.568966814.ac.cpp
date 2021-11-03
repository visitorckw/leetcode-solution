/*
 * @lc app=leetcode id=696 lang=cpp
 *
 * [696] Count Binary Substrings
 */

// @lc code=start
class Solution {
public:
    int countBinarySubstrings(string s) {
        vector<int> cont;
        char prev = '\0';
        int ctr = 0;
        for(auto ch : s){
            if(ch != prev){
                if(ctr) cont.push_back(ctr);
                prev = ch;
                ctr = 1;
            }
            else ++ctr;
        }
        if(ctr) cont.push_back(ctr);
        
        int res = 0;
        for(int i = 1; i < cont.size(); i++)
            res += min(cont[i], cont[i-1]);
        return res;
    }
};
// @lc code=end

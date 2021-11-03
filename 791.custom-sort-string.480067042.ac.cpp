/*
 * @lc app=leetcode id=791 lang=cpp
 *
 * [791] Custom Sort String
 */

// @lc code=start
int val[26] = {};
class Solution {
public:
    
    static bool cmp(const char &c1, const char &c2){
        return val[c1 - 'a'] < val[c2 - 'a'];
    }
    string customSortString(string S, string T) {
        for(int i = 0; i < S.size(); i++){
            val[S[i] - 'a'] = i + 1;
        }
        sort(T.begin(), T.end(), cmp);
        return T;
    }
};
// @lc code=end

/*
 * @lc app=leetcode id=1763 lang=cpp
 *
 * [1763] Longest Nice Substring
 */

// @lc code=start
class Solution {
public:
    bool check(int* up, int* low){
        for(int i = 0; i < 26; i++)
            if((bool)(up[i]) ^ (bool)(low[i]))
                return false;
        return true;
    }
    string longestNiceSubstring(string s) {
        int up[26] = {};
        int low[26] = {};
        string res;
        for(int i = 0; i < s.size(); i++){
            for(int j = res.size() + 1; j <= s.size() - i; j++){
                
                memset(up, 0, 26*sizeof(int));
                memset(low, 0, 26*sizeof(int));
                const string str = s.substr(i, j);
                for(auto ch : str){
                    if(isupper(ch))
                        up[ch-'A']++;
                    else
                        low[ch-'a']++;
                }
                if(check(up, low))
                    res = str;
            }
        }
        return res;
    }
};
// @lc code=end

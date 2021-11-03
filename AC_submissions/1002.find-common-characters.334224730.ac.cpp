/*
 * @lc app=leetcode id=1002 lang=cpp
 *
 * [1002] Find Common Characters
 */

// @lc code=start
class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
        if(A.empty())
            return {};
        vector<int>table(26,INT_MAX);
        for(auto str : A){
            vector<int>freq(26,0);
            for(auto ch : str)
                ++freq[ch-'a'];
            for(int i = 0; i < 26; i++)
                table[i] = min(table[i],freq[i]);
        }
        vector<string>ans;
        string s = "a";
        for(int i = 0; i < 26; i++)
            for(int j = 0; j < table[i]; j++){
                s[0] = 'a' + i;
                ans.push_back(s);
            }
        return ans;
    }
};
// @lc code=end

/*
 * @lc app=leetcode id=821 lang=cpp
 *
 * [821] Shortest Distance to a Character
 */

// @lc code=start
class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> ans(s.size(), INT_MAX);
        for(int i = 0; i < s.size(); i++){
            
            for(int j = i; j >= 0; j--){
                if(s[j] == c){
                    ans[i] = min(ans[i], i - j);
                    break;
                }
            }
            for(int j = i; j < s.size(); j++){
                if(s[j] == c){
                    ans[i] = min(ans[i], j - i);
                    break;
                }
            }
        }
        return ans;
    }
};
// @lc code=end

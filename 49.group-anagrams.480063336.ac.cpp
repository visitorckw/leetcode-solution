/*
 * @lc app=leetcode id=49 lang=cpp
 *
 * [49] Group Anagrams
 */

// @lc code=start
class Solution {
public:
    unordered_map<string, int> table;
    vector<vector<string>> ans;
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        for(auto str : strs){
            string s = str;
            sort(s.begin(), s.end());
            if(table.find(s) == table.end()){
                table[s] = ans.size();
                ans.push_back({str});
            }
            else ans[table[s]].push_back(str);
        }
        return ans;
    }
};
// @lc code=end

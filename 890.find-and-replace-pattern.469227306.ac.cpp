/*
 * @lc app=leetcode id=890 lang=cpp
 *
 * [890] Find and Replace Pattern
 */

// @lc code=start
class Solution {
public:
    unordered_map<char, char>table1, table2;
    vector<string> ans;
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        const int size = pattern.size();
        for(auto word : words){
            table1.clear();
            table2.clear();
            bool flag = true;
            for(int i = 0; i < size; i++){
                if(table1.find(pattern[i]) == table1.end() and table2.find(word[i]) == table2.end()){
                    table1[pattern[i]] = word[i];
                    table2[word[i]] = pattern[i];
                    // cout << pattern[i] << "->" << word[i] << '\n';
                }
                else if(table1[pattern[i]] != word[i] or table2[word[i]] != pattern[i]){
                    flag = false;
                    break;
                }
            }
            if(flag) ans.push_back(word);
        }
        return ans;
    }
};
// @lc code=end

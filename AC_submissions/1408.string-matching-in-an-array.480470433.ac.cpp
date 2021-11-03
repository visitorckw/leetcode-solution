/*
 * @lc app=leetcode id=1408 lang=cpp
 *
 * [1408] String Matching in an Array
 */

// @lc code=start
class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> ans;
        unordered_set<string> table;
        for(int i = 0; i < words.size(); i++){
            for(int j = 0; j < i; j++){
                if(words[i].size() > words[j].size()){
                    if(words[i].find(words[j]) != string::npos and !table.count(words[j])){
                        ans.push_back(words[j]);
                        table.insert(words[j]);
                    }
                }
                else{
                    if(words[j].find(words[i]) != string::npos and !table.count(words[i])){
                        ans.push_back(words[i]);
                        table.insert(words[i]);
                    }
                }
            }
        }
        return ans;
    }
};
// @lc code=end

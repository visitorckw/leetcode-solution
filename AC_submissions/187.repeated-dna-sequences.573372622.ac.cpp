/*
 * @lc app=leetcode id=187 lang=cpp
 *
 * [187] Repeated DNA Sequences
 */

// @lc code=start
class Solution {
public:
    unordered_map<string, int>table;
    vector<string> findRepeatedDnaSequences(string s) {
        if(s.size() <= 10) return {};
        string str(10, '\0');
        for(int i = 0; i < 10; i++)
            str[i] = s[i];
        table[str]++;
        for(int r = 10; r < s.size(); r++){
            str += s[r];
            str.erase(str.begin());
            table[str]++;
        }
        vector<string>res;
        for(auto it : table){
            if(it.second > 1)
                res.push_back(it.first);
        }
        return res;
    }
};
// @lc code=end

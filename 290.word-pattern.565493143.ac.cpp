/*
 * @lc app=leetcode id=290 lang=cpp
 *
 * [290] Word Pattern
 */

// @lc code=start
class Solution {
public:
    unordered_map<char, string> table;
    unordered_set<string> exist;
    bool wordPattern(string pattern, string s) {
        vector<string> arr;
        string str;
        for(auto ch : s){
            if(ch == ' '){
                arr.push_back(str);
                str.clear();
            }
            else str.push_back(ch);
        }
        if(!str.empty())
            arr.push_back(str);
        if(arr.size() != pattern.size()) return false;
        
        for(int i = 0; i < pattern.size(); i++){
            // cout << pattern[i] << ' ' << table[pattern[i]] << '\n';
            if(table[pattern[i]] == ""){
                if(exist.count(arr[i])) return false;
                exist.insert(arr[i]);
                table[pattern[i]] = arr[i];
            }
            else if(table[pattern[i]] != arr[i]) return false;
        }
        return true;
    }
};
// @lc code=end

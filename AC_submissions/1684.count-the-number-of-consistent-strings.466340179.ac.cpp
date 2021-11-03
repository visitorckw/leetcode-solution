/*
 * @lc app=leetcode id=1684 lang=cpp
 *
 * [1684] Count the Number of Consistent Strings
 */

// @lc code=start
class Solution {
public:
    unordered_set<char> table;
    int ans = 0;
    int countConsistentStrings(string allowed, vector<string>& words) {
        for(auto ch : allowed)
            table.insert(ch);
        for(auto str : words){
            bool flag = true;
            for(auto ch : str){
                if(!table.count(ch)){
                    flag = false;
                    break;
                }
            }
            if(flag) ++ans;
        }
        return ans;
    }
};
// @lc code=end

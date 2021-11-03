/*
 * @lc app=leetcode id=1773 lang=cpp
 *
 * [1773] Count Items Matching a Rule
 */

// @lc code=start
class Solution {
public:
    int key(const string &str){
        if(str == "type") return 0;
        if(str == "color") return 1;
        return 2;
    }
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int ans = 0;
        int k = key(ruleKey);
        for(auto item :items)
            if(item[k] == ruleValue)
                ++ans;
        return ans;
    }
};
// @lc code=end

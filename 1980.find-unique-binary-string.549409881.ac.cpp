/*
 * @lc app=leetcode id=1980 lang=cpp
 *
 * [1980] Find Unique Binary String
 */

// @lc code=start
class Solution {
public:
    int N;
    unordered_set<string> table;
    bool find = false;
    string res;
    void dfs(int pos, string& str){
        if(find) return;
        if(pos >= N){
            if(!table.count(str)){
                find = true;
                res = str;
            }
            return;
        }
        str[pos] = '0';
        dfs(pos+1, str);
        str[pos] = '1';
        dfs(pos+1, str);
        str[pos] = '0';
    }
    string findDifferentBinaryString(vector<string>& nums) {
        N = nums.size();
        for(auto str : nums)
            table.insert(str);
        string str(N, '0');
        dfs(0, str);
        return res;
    }
};
// @lc code=end

/*
 * @lc app=leetcode id=1897 lang=cpp
 *
 * [1897] Redistribute Characters to Make All Strings Equal
 */

// @lc code=start
class Solution {
public:
    bool makeEqual(vector<string>& words) {
        const int N = words.size();
        int ctr[26] = {};
        for(auto str : words)
            for(auto ch : str)
                ctr[ch-'a']++;
        for(int i = 0; i < 26; i++)
            if(ctr[i] % N) return false;
        return true;
    }
};
// @lc code=end

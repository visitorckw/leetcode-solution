/*
 * @lc app=leetcode id=1160 lang=cpp
 *
 * [1160] Find Words That Can Be Formed by Characters
 */

// @lc code=start
class Solution {
public:
    int ctr[26] = {};
    int sum[26] = {};
    int countCharacters(vector<string>& words, string chars) {
        int res = 0;
        for(auto ch : chars)
            ctr[ch-'a']++;
        for(auto str : words){
            memset(sum, 0, 26 * sizeof(int));
            bool flag = true;
            for(auto ch : str){
                if(++sum[ch-'a'] > ctr[ch-'a']){
                    flag = false;
                    break;
                }
            }
            if(flag) res += str.size();
        }
        return res;
    }
};
// @lc code=end

/*
 * @lc app=leetcode id=944 lang=cpp
 *
 * [944] Delete Columns to Make Sorted
 */

// @lc code=start
class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int del = 0;
        for(int j = 0; j < strs[0].size(); j++){
            string str1, str2;
            for(int i = 0; i < strs.size(); i++){
                str1 += strs[i][j];
                str2 += strs[i][j];
            }
            sort(str1.begin(), str1.end());
            if(str1 != str2)
                 del++;
            }
        return del;
    }
};
// @lc code=end

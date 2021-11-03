/*
 * @lc app=leetcode id=6 lang=cpp
 *
 * [6] Zigzag Conversion
 */

// @lc code=start
class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1) return s;
        vector<string> vec(numRows, "");
        int row = 0;
        bool asc = true;
        for(auto ch : s){
            vec[row] += ch;
            asc ? row++ : row--;
            if(row == numRows){
                asc = false;
                row = numRows - 2;
            }
            else if(row == -1){
                asc = true;
                row = 1;
            }
        }
        string res;
        for(auto str : vec)
            for(auto ch : str)
                res += ch;
        return res;
    }
};
// @lc code=end
